#! /usr/bin/env node

var fs = require('fs');
var allFiles = fs.readdirSync(__dirname + '/generated/');
var allClasses = [];
var allHeaderFiles = [];

allFiles.forEach(function (file) {
    if (file.endsWith(".h")) {
        allHeaderFiles.push(file);
    }

    var str = fs.readFileSync(__dirname + '/generated/' + file, 'utf8');
    var data = str.matchAll(/@@protoc_insertion_point\(class_definition:(.*)\)/g);
    console.log(data);
    for (const match of data) {
        var str2 = match[0].replace("@@protoc_insertion_point(class_definition:", "").replaceAll(".", "_");
        str2 = str2.substring(0, str2.length - 1);
        allClasses.push(str2);
    }
});

console.log(allClasses);
console.log(allHeaderFiles);

var lines = [];

lines.push("// This file is auto-generated by generatemaincpp.js");
lines.push("");
lines.push("// Begin includes");
lines.push('#include "export.h"');
allHeaderFiles.forEach(element => {
    lines.push(`#include "generated/${element}"`);
});
lines.push('#include "afterincludes.h"');

lines.push("");
lines.push("// Begin functions");
allClasses.forEach(c => {
    lines.push("");
    lines.push("// Begin " + c);
    lines.push(`EXPORT ${c} *${c}_Construct() {`);
    lines.push(`    return new ${c}();`);
    lines.push("}");
    lines.push("");
    lines.push(`EXPORT ${c} *${c}_Deserialize(void* buffer, int len) {`);
    lines.push(`    ${c} *msg = new ${c}();`);
    lines.push("    if (!msg->ParseFromArray(buffer, len)) {");
    lines.push("        return nullptr;");
    lines.push("    }");
    lines.push("");
    lines.push("    return msg;");
    lines.push("}");
    lines.push("");
    lines.push(`EXPORT bool ${c}_DeserializeInto(${c} *target, void* buffer, int len) {`);
    lines.push("    return target->ParseFromArray(buffer, len);");
    lines.push("}");
    lines.push("");
    lines.push(`EXPORT void ${c}_Delete(${c}* ptr) {`);
    lines.push("    delete ptr;");
    lines.push("}");
});

fs.writeFileSync("main.cpp", Buffer.from(lines.join('\n')));
