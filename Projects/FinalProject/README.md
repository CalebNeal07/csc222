# CSC 222 - Final Project

---
## Installation & Building

This project uses [CMake](https://cmake.org/download/) to build, so make sure it's installed.

Dependencies:
 - [SDL2](https://wiki.libsdl.org/SDL2/Installation)

### Install

```shell
git clone https://github.com/CalebNeal07/csc222.git && cd ./csc222/Projects/FinalProject
```
### Build

```shell
cmake . && make
```
This will generate an executable called `FinalProject` on MacOS and Linux and `FinalProject.exe` one Windows.

## Usage

This project utilizes SDL to play `.wav` files from a shell. 

Files are passed as a command line argument:
```shell
./FinalProject samples/CantinaBand60.wav
```