# CPP-with-cmake-example

This project has been created to show power of CMake 3.0+ tool. It is so much easier to build developer friendly and app user friendly build system.
This project contains simple (useless) C++ code with tests in GTest and GMock.
To use external libriaries build system should find required package and push required path to compiler.
This task is an easy and typical task for CMake. On top of that in this project CMake can use any compiler from CXX env variable and adds arguments specific for target (release or debug) and compiler.

## Getting started:
I encourage you to read this CMake 3.0+ documentation and GTest example.
Links:
https://cmake.org/cmake/help/latest/index.html

https://cliutils.gitlab.io/modern-cmake/

https://google.github.io/googletest/quickstart-cmake.html

https://google.github.io/googletest/

## Platforms
This project is working only on Linux (tested under Ubuntu 20.04 and Debian 10.10)

## Requirements
* Compiler with at least C++14 standard
* CMake
* GTest
* GMock

## How to install tools
To install latest CMake please follow this instruction:
https://cliutils.gitlab.io/modern-cmake/chapters/intro/installing.html

To install GTest and GMock you can use simple apt install

## How to build
    $mkdir build
    $cd build
    $cmake ..
    $make

## How to run test
    $mkdir build
    $cd build
    $cmake ..
    $make
    $make test

### Supported targets
By default CMake supports Release and Debug targets.
In this project in case of Release version CMake will use -O3 optimization.
In case of Debug version CMake will use -O0 -g3 and -ggdb

To push target into CMake please use this commands:

    $cmake -DCMAKE_BUILD_TYPE=Release ..
or

    $cmake -DCMAKE_BUILD_TYPE=Debug ..

#### Contact
email: michalkukowski10@gmail.com
