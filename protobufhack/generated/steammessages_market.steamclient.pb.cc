// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: steammessages_market.steamclient.proto

#include "steammessages_market.steamclient.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
constexpr CEconMarket_IsMarketplaceAllowed_Request::CEconMarket_IsMarketplaceAllowed_Request(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : webcookie_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct CEconMarket_IsMarketplaceAllowed_RequestDefaultTypeInternal {
  constexpr CEconMarket_IsMarketplaceAllowed_RequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~CEconMarket_IsMarketplaceAllowed_RequestDefaultTypeInternal() {}
  union {
    CEconMarket_IsMarketplaceAllowed_Request _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT CEconMarket_IsMarketplaceAllowed_RequestDefaultTypeInternal _CEconMarket_IsMarketplaceAllowed_Request_default_instance_;
constexpr CEconMarket_IsMarketplaceAllowed_Response::CEconMarket_IsMarketplaceAllowed_Response(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : reason_(0u)
  , allowed_at_time_(0u)
  , steamguard_required_days_(0u)
  , allowed_(false)
  , forms_requested_(false)
  , forms_require_verification_(false)
  , new_device_cooldown_days_(0u){}
struct CEconMarket_IsMarketplaceAllowed_ResponseDefaultTypeInternal {
  constexpr CEconMarket_IsMarketplaceAllowed_ResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~CEconMarket_IsMarketplaceAllowed_ResponseDefaultTypeInternal() {}
  union {
    CEconMarket_IsMarketplaceAllowed_Response _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT CEconMarket_IsMarketplaceAllowed_ResponseDefaultTypeInternal _CEconMarket_IsMarketplaceAllowed_Response_default_instance_;
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_steammessages_5fmarket_2esteamclient_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_steammessages_5fmarket_2esteamclient_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* file_level_service_descriptors_steammessages_5fmarket_2esteamclient_2eproto[1];

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_steammessages_5fmarket_2esteamclient_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::CEconMarket_IsMarketplaceAllowed_Request, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::CEconMarket_IsMarketplaceAllowed_Request, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::CEconMarket_IsMarketplaceAllowed_Request, webcookie_),
  0,
  PROTOBUF_FIELD_OFFSET(::CEconMarket_IsMarketplaceAllowed_Response, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::CEconMarket_IsMarketplaceAllowed_Response, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::CEconMarket_IsMarketplaceAllowed_Response, allowed_),
  PROTOBUF_FIELD_OFFSET(::CEconMarket_IsMarketplaceAllowed_Response, reason_),
  PROTOBUF_FIELD_OFFSET(::CEconMarket_IsMarketplaceAllowed_Response, allowed_at_time_),
  PROTOBUF_FIELD_OFFSET(::CEconMarket_IsMarketplaceAllowed_Response, steamguard_required_days_),
  PROTOBUF_FIELD_OFFSET(::CEconMarket_IsMarketplaceAllowed_Response, forms_requested_),
  PROTOBUF_FIELD_OFFSET(::CEconMarket_IsMarketplaceAllowed_Response, forms_require_verification_),
  PROTOBUF_FIELD_OFFSET(::CEconMarket_IsMarketplaceAllowed_Response, new_device_cooldown_days_),
  3,
  0,
  1,
  2,
  4,
  5,
  6,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::CEconMarket_IsMarketplaceAllowed_Request)},
  { 7, 19, sizeof(::CEconMarket_IsMarketplaceAllowed_Response)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_CEconMarket_IsMarketplaceAllowed_Request_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_CEconMarket_IsMarketplaceAllowed_Response_default_instance_),
};

const char descriptor_table_protodef_steammessages_5fmarket_2esteamclient_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n&steammessages_market.steamclient.proto"
  "\032 google/protobuf/descriptor.proto\032\030stea"
  "mmessages_base.proto\032,steammessages_unif"
  "ied_base.steamclient.proto\"=\n(CEconMarke"
  "t_IsMarketplaceAllowed_Request\022\021\n\twebcoo"
  "kie\030\001 \001(\t\"\346\001\n)CEconMarket_IsMarketplaceA"
  "llowed_Response\022\017\n\007allowed\030\001 \001(\010\022\016\n\006reas"
  "on\030\002 \001(\r\022\027\n\017allowed_at_time\030\003 \001(\r\022 \n\030ste"
  "amguard_required_days\030\004 \001(\r\022\027\n\017forms_req"
  "uested\030\007 \001(\010\022\"\n\032forms_require_verificati"
  "on\030\010 \001(\010\022 \n\030new_device_cooldown_days\030\t \001"
  "(\r2{\n\nEconMarket\022m\n\024IsMarketplaceAllowed"
  "\022).CEconMarket_IsMarketplaceAllowed_Requ"
  "est\032*.CEconMarket_IsMarketplaceAllowed_R"
  "esponseB\035\200\001\001\252\002\027OpenSteamworks.Protobuf"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_steammessages_5fmarket_2esteamclient_2eproto_deps[3] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
  &::descriptor_table_steammessages_5fbase_2eproto,
  &::descriptor_table_steammessages_5funified_5fbase_2esteamclient_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_steammessages_5fmarket_2esteamclient_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_steammessages_5fmarket_2esteamclient_2eproto = {
  false, false, 598, descriptor_table_protodef_steammessages_5fmarket_2esteamclient_2eproto, "steammessages_market.steamclient.proto", 
  &descriptor_table_steammessages_5fmarket_2esteamclient_2eproto_once, descriptor_table_steammessages_5fmarket_2esteamclient_2eproto_deps, 3, 2,
  schemas, file_default_instances, TableStruct_steammessages_5fmarket_2esteamclient_2eproto::offsets,
  file_level_metadata_steammessages_5fmarket_2esteamclient_2eproto, file_level_enum_descriptors_steammessages_5fmarket_2esteamclient_2eproto, file_level_service_descriptors_steammessages_5fmarket_2esteamclient_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_steammessages_5fmarket_2esteamclient_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_steammessages_5fmarket_2esteamclient_2eproto);
  return descriptor_table_steammessages_5fmarket_2esteamclient_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_steammessages_5fmarket_2esteamclient_2eproto(&descriptor_table_steammessages_5fmarket_2esteamclient_2eproto);

// ===================================================================

class CEconMarket_IsMarketplaceAllowed_Request::_Internal {
 public:
  using HasBits = decltype(std::declval<CEconMarket_IsMarketplaceAllowed_Request>()._has_bits_);
  static void set_has_webcookie(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

CEconMarket_IsMarketplaceAllowed_Request::CEconMarket_IsMarketplaceAllowed_Request(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:CEconMarket_IsMarketplaceAllowed_Request)
}
CEconMarket_IsMarketplaceAllowed_Request::CEconMarket_IsMarketplaceAllowed_Request(const CEconMarket_IsMarketplaceAllowed_Request& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  webcookie_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_webcookie()) {
    webcookie_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_webcookie(), 
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:CEconMarket_IsMarketplaceAllowed_Request)
}

void CEconMarket_IsMarketplaceAllowed_Request::SharedCtor() {
webcookie_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

CEconMarket_IsMarketplaceAllowed_Request::~CEconMarket_IsMarketplaceAllowed_Request() {
  // @@protoc_insertion_point(destructor:CEconMarket_IsMarketplaceAllowed_Request)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void CEconMarket_IsMarketplaceAllowed_Request::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  webcookie_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void CEconMarket_IsMarketplaceAllowed_Request::ArenaDtor(void* object) {
  CEconMarket_IsMarketplaceAllowed_Request* _this = reinterpret_cast< CEconMarket_IsMarketplaceAllowed_Request* >(object);
  (void)_this;
}
void CEconMarket_IsMarketplaceAllowed_Request::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void CEconMarket_IsMarketplaceAllowed_Request::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void CEconMarket_IsMarketplaceAllowed_Request::Clear() {
// @@protoc_insertion_point(message_clear_start:CEconMarket_IsMarketplaceAllowed_Request)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    webcookie_.ClearNonDefaultToEmpty();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CEconMarket_IsMarketplaceAllowed_Request::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional string webcookie = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_webcookie();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "CEconMarket_IsMarketplaceAllowed_Request.webcookie");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* CEconMarket_IsMarketplaceAllowed_Request::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:CEconMarket_IsMarketplaceAllowed_Request)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string webcookie = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_webcookie().data(), static_cast<int>(this->_internal_webcookie().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "CEconMarket_IsMarketplaceAllowed_Request.webcookie");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_webcookie(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:CEconMarket_IsMarketplaceAllowed_Request)
  return target;
}

size_t CEconMarket_IsMarketplaceAllowed_Request::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:CEconMarket_IsMarketplaceAllowed_Request)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional string webcookie = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_webcookie());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CEconMarket_IsMarketplaceAllowed_Request::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:CEconMarket_IsMarketplaceAllowed_Request)
  GOOGLE_DCHECK_NE(&from, this);
  const CEconMarket_IsMarketplaceAllowed_Request* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<CEconMarket_IsMarketplaceAllowed_Request>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:CEconMarket_IsMarketplaceAllowed_Request)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:CEconMarket_IsMarketplaceAllowed_Request)
    MergeFrom(*source);
  }
}

void CEconMarket_IsMarketplaceAllowed_Request::MergeFrom(const CEconMarket_IsMarketplaceAllowed_Request& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:CEconMarket_IsMarketplaceAllowed_Request)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_webcookie()) {
    _internal_set_webcookie(from._internal_webcookie());
  }
}

void CEconMarket_IsMarketplaceAllowed_Request::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:CEconMarket_IsMarketplaceAllowed_Request)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CEconMarket_IsMarketplaceAllowed_Request::CopyFrom(const CEconMarket_IsMarketplaceAllowed_Request& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CEconMarket_IsMarketplaceAllowed_Request)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CEconMarket_IsMarketplaceAllowed_Request::IsInitialized() const {
  return true;
}

void CEconMarket_IsMarketplaceAllowed_Request::InternalSwap(CEconMarket_IsMarketplaceAllowed_Request* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  webcookie_.Swap(&other->webcookie_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata CEconMarket_IsMarketplaceAllowed_Request::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class CEconMarket_IsMarketplaceAllowed_Response::_Internal {
 public:
  using HasBits = decltype(std::declval<CEconMarket_IsMarketplaceAllowed_Response>()._has_bits_);
  static void set_has_allowed(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_reason(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_allowed_at_time(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_steamguard_required_days(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_forms_requested(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_forms_require_verification(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_new_device_cooldown_days(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
};

CEconMarket_IsMarketplaceAllowed_Response::CEconMarket_IsMarketplaceAllowed_Response(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:CEconMarket_IsMarketplaceAllowed_Response)
}
CEconMarket_IsMarketplaceAllowed_Response::CEconMarket_IsMarketplaceAllowed_Response(const CEconMarket_IsMarketplaceAllowed_Response& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&reason_, &from.reason_,
    static_cast<size_t>(reinterpret_cast<char*>(&new_device_cooldown_days_) -
    reinterpret_cast<char*>(&reason_)) + sizeof(new_device_cooldown_days_));
  // @@protoc_insertion_point(copy_constructor:CEconMarket_IsMarketplaceAllowed_Response)
}

void CEconMarket_IsMarketplaceAllowed_Response::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&reason_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&new_device_cooldown_days_) -
    reinterpret_cast<char*>(&reason_)) + sizeof(new_device_cooldown_days_));
}

CEconMarket_IsMarketplaceAllowed_Response::~CEconMarket_IsMarketplaceAllowed_Response() {
  // @@protoc_insertion_point(destructor:CEconMarket_IsMarketplaceAllowed_Response)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void CEconMarket_IsMarketplaceAllowed_Response::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void CEconMarket_IsMarketplaceAllowed_Response::ArenaDtor(void* object) {
  CEconMarket_IsMarketplaceAllowed_Response* _this = reinterpret_cast< CEconMarket_IsMarketplaceAllowed_Response* >(object);
  (void)_this;
}
void CEconMarket_IsMarketplaceAllowed_Response::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void CEconMarket_IsMarketplaceAllowed_Response::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void CEconMarket_IsMarketplaceAllowed_Response::Clear() {
// @@protoc_insertion_point(message_clear_start:CEconMarket_IsMarketplaceAllowed_Response)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    ::memset(&reason_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&new_device_cooldown_days_) -
        reinterpret_cast<char*>(&reason_)) + sizeof(new_device_cooldown_days_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CEconMarket_IsMarketplaceAllowed_Response::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional bool allowed = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_allowed(&has_bits);
          allowed_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 reason = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_reason(&has_bits);
          reason_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 allowed_at_time = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_allowed_at_time(&has_bits);
          allowed_at_time_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 steamguard_required_days = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          _Internal::set_has_steamguard_required_days(&has_bits);
          steamguard_required_days_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool forms_requested = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 56)) {
          _Internal::set_has_forms_requested(&has_bits);
          forms_requested_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool forms_require_verification = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 64)) {
          _Internal::set_has_forms_require_verification(&has_bits);
          forms_require_verification_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 new_device_cooldown_days = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 72)) {
          _Internal::set_has_new_device_cooldown_days(&has_bits);
          new_device_cooldown_days_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* CEconMarket_IsMarketplaceAllowed_Response::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:CEconMarket_IsMarketplaceAllowed_Response)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bool allowed = 1;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_allowed(), target);
  }

  // optional uint32 reason = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_reason(), target);
  }

  // optional uint32 allowed_at_time = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->_internal_allowed_at_time(), target);
  }

  // optional uint32 steamguard_required_days = 4;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(4, this->_internal_steamguard_required_days(), target);
  }

  // optional bool forms_requested = 7;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(7, this->_internal_forms_requested(), target);
  }

  // optional bool forms_require_verification = 8;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(8, this->_internal_forms_require_verification(), target);
  }

  // optional uint32 new_device_cooldown_days = 9;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(9, this->_internal_new_device_cooldown_days(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:CEconMarket_IsMarketplaceAllowed_Response)
  return target;
}

size_t CEconMarket_IsMarketplaceAllowed_Response::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:CEconMarket_IsMarketplaceAllowed_Response)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    // optional uint32 reason = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->_internal_reason());
    }

    // optional uint32 allowed_at_time = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->_internal_allowed_at_time());
    }

    // optional uint32 steamguard_required_days = 4;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->_internal_steamguard_required_days());
    }

    // optional bool allowed = 1;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 1;
    }

    // optional bool forms_requested = 7;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 1;
    }

    // optional bool forms_require_verification = 8;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 + 1;
    }

    // optional uint32 new_device_cooldown_days = 9;
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->_internal_new_device_cooldown_days());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CEconMarket_IsMarketplaceAllowed_Response::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:CEconMarket_IsMarketplaceAllowed_Response)
  GOOGLE_DCHECK_NE(&from, this);
  const CEconMarket_IsMarketplaceAllowed_Response* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<CEconMarket_IsMarketplaceAllowed_Response>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:CEconMarket_IsMarketplaceAllowed_Response)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:CEconMarket_IsMarketplaceAllowed_Response)
    MergeFrom(*source);
  }
}

void CEconMarket_IsMarketplaceAllowed_Response::MergeFrom(const CEconMarket_IsMarketplaceAllowed_Response& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:CEconMarket_IsMarketplaceAllowed_Response)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    if (cached_has_bits & 0x00000001u) {
      reason_ = from.reason_;
    }
    if (cached_has_bits & 0x00000002u) {
      allowed_at_time_ = from.allowed_at_time_;
    }
    if (cached_has_bits & 0x00000004u) {
      steamguard_required_days_ = from.steamguard_required_days_;
    }
    if (cached_has_bits & 0x00000008u) {
      allowed_ = from.allowed_;
    }
    if (cached_has_bits & 0x00000010u) {
      forms_requested_ = from.forms_requested_;
    }
    if (cached_has_bits & 0x00000020u) {
      forms_require_verification_ = from.forms_require_verification_;
    }
    if (cached_has_bits & 0x00000040u) {
      new_device_cooldown_days_ = from.new_device_cooldown_days_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void CEconMarket_IsMarketplaceAllowed_Response::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:CEconMarket_IsMarketplaceAllowed_Response)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CEconMarket_IsMarketplaceAllowed_Response::CopyFrom(const CEconMarket_IsMarketplaceAllowed_Response& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CEconMarket_IsMarketplaceAllowed_Response)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CEconMarket_IsMarketplaceAllowed_Response::IsInitialized() const {
  return true;
}

void CEconMarket_IsMarketplaceAllowed_Response::InternalSwap(CEconMarket_IsMarketplaceAllowed_Response* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(CEconMarket_IsMarketplaceAllowed_Response, new_device_cooldown_days_)
      + sizeof(CEconMarket_IsMarketplaceAllowed_Response::new_device_cooldown_days_)
      - PROTOBUF_FIELD_OFFSET(CEconMarket_IsMarketplaceAllowed_Response, reason_)>(
          reinterpret_cast<char*>(&reason_),
          reinterpret_cast<char*>(&other->reason_));
}

::PROTOBUF_NAMESPACE_ID::Metadata CEconMarket_IsMarketplaceAllowed_Response::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

EconMarket::~EconMarket() {}

const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* EconMarket::descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_steammessages_5fmarket_2esteamclient_2eproto);
  return file_level_service_descriptors_steammessages_5fmarket_2esteamclient_2eproto[0];
}

const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* EconMarket::GetDescriptor() {
  return descriptor();
}

void EconMarket::IsMarketplaceAllowed(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                         const ::CEconMarket_IsMarketplaceAllowed_Request*,
                         ::CEconMarket_IsMarketplaceAllowed_Response*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method IsMarketplaceAllowed() not implemented.");
  done->Run();
}

void EconMarket::CallMethod(const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method,
                             ::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                             const ::PROTOBUF_NAMESPACE_ID::Message* request,
                             ::PROTOBUF_NAMESPACE_ID::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), file_level_service_descriptors_steammessages_5fmarket_2esteamclient_2eproto[0]);
  switch(method->index()) {
    case 0:
      IsMarketplaceAllowed(controller,
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<const ::CEconMarket_IsMarketplaceAllowed_Request*>(
                 request),
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<::CEconMarket_IsMarketplaceAllowed_Response*>(
                 response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::PROTOBUF_NAMESPACE_ID::Message& EconMarket::GetRequestPrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::CEconMarket_IsMarketplaceAllowed_Request::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::PROTOBUF_NAMESPACE_ID::MessageFactory::generated_factory()
          ->GetPrototype(method->input_type());
  }
}

const ::PROTOBUF_NAMESPACE_ID::Message& EconMarket::GetResponsePrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::CEconMarket_IsMarketplaceAllowed_Response::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::PROTOBUF_NAMESPACE_ID::MessageFactory::generated_factory()
          ->GetPrototype(method->output_type());
  }
}

EconMarket_Stub::EconMarket_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
EconMarket_Stub::EconMarket_Stub(
    ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel,
    ::PROTOBUF_NAMESPACE_ID::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::PROTOBUF_NAMESPACE_ID::Service::STUB_OWNS_CHANNEL) {}
EconMarket_Stub::~EconMarket_Stub() {
  if (owns_channel_) delete channel_;
}

void EconMarket_Stub::IsMarketplaceAllowed(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                              const ::CEconMarket_IsMarketplaceAllowed_Request* request,
                              ::CEconMarket_IsMarketplaceAllowed_Response* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::CEconMarket_IsMarketplaceAllowed_Request* Arena::CreateMaybeMessage< ::CEconMarket_IsMarketplaceAllowed_Request >(Arena* arena) {
  return Arena::CreateMessageInternal< ::CEconMarket_IsMarketplaceAllowed_Request >(arena);
}
template<> PROTOBUF_NOINLINE ::CEconMarket_IsMarketplaceAllowed_Response* Arena::CreateMaybeMessage< ::CEconMarket_IsMarketplaceAllowed_Response >(Arena* arena) {
  return Arena::CreateMessageInternal< ::CEconMarket_IsMarketplaceAllowed_Response >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
