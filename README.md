# OpenSteamworks.Native
Native components for OpenSteamworks.

## Contents
- libaudio.so stub for Linux
- bootstrappershim for Linux
- steamservice.so stub for Linux
- htmlhost for Windows and Linux
- launchwrapper and reaper for Linux
- protobufhack for all platforms
- SDL for all platforms
- SDL_ttf for all platforms
- steamserviced for Linux

## Build dependencies
When building locally you'll need:

### On Linux, for Linux
- gcc
- g++
- 32-bit gcc
- 32-bit g++
- [SDL3 dependencies](https://github.com/OpenSteamClient/SDL/blob/main/docs/README-linux.md)

### On Linux, for Windows
- MingW gcc (32-bit)
- MingW gcc (64-bit)
- MingW g++ (32-bit)
- MingW g++ (64-bit)
- SDL3 dependencies (sorry, find this out yourself. Probably just MingW)

## On Windows, for Windows
- Visual Studio Build Tools 2022+