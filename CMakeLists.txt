# Minimum version of CMake required to build this project
cmake_minimum_required(VERSION 3.0)

# Name of the project
project(CMakeTemplateProject)


add_subdirectory(src)
add_subdirectory(OtherStuff)

# Create a few variables for the folder names, so they are easier to rename in
# the future
set(SRC_DIR src)
set(OTHER_DIR OtherStuff)

# Add all the source files needed to build the executable
add_executable(
  CMakeTemplateProject
  ${SRC_DIR}/main.cpp
  ${SRC_DIR}/SomeClass.cpp
  ${SRC_DIR}/SomeClass.h
  ${SRC_DIR}/AnotherClass.cpp
  ${SRC_DIR}/AnotherClass.h
  ${OTHER_DIR}/OtherClass.cpp
  ${OTHER_DIR}/OtherClass.h
)