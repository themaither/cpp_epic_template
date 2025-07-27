# cpp_epic_template

## Epic template for cpp projects

## >>> Features <<<

### Easy *\_\_configuring\_\_* / *\_\_installation\_\_* process

```sh
./configure
cd build
./gen
./gen install
```

- Or if you want to run your program:

```sh
./run
```

### Bleeding edge nonexistant *c++ 26* because were not old geezers

### Configuration header file

```cpp
#include <config.hpp>

std::println("{}", config::name);
```

### Manage program data like gentleman

```c
# meson.build

configure_file(copy: true, 
  install: true, 
  input: 'message.txt', 
  output: 'message.txt', 
  install_dir: program_data_dir)
```

```cpp
// main.cpp

std::fstream data{ config::path::program_data() / "message.txt" }
```