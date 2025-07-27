# Installation process

## Commands

```sh
./configure
cd build
./gen
./gen install
```

## Configuring project

`./configure` in this case will delegate configuration to meson.
Configuration stuff should be done inside `meson.build` file.

## Building

`./gen` leads to ninja build system. Running `./gen` will cause
all targets to compile

## Installing

`./gen install` will install program into system. Program on unix
like systems will be installed into `/usr/local` but it can be changed by passing `--prefix PREFIX` flag to `./configure`.