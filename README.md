# Classroom examples from Lecture 04

The following are the build commands used to demonstrate debugging with GDB and DDD

## generate executable with debugger information and all warnings included (manual compilation)
`g++ -Wall -g -o main main.cpp`


## generate executable with debugger information and all warnings included (CMake compilation)
```c++
mkdir build
cd build
cmake ..
make
```

