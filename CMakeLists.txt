# Minimal version of CMake
cmake_minimum_required (VERSION 2.6)

# Define project name
project(HostMeAgent)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory (src)
