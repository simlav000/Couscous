# minimum required version of CMake
cmake_minimum_required(VERSION 3.0)

# Project name
project(Couscous)

# Add source files
file(GLOB_RECURSE SOURCES "source/*.cpp")

# Add header files
include_directories("source/headers")

# Add executable target
add_executable(myexecutable ${SOURCES})

