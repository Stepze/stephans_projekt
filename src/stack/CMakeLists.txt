cmake_minimum_required(VERSION 3.0)
project(interface_lib VERSION 1.0)

set(stack_files
 stack.hpp
 stack.cpp
        )

add_library(stack ${stack_files})

target_include_directories(stack INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

set_property(TARGET stack PROPERTY LINKER_LANGUAGE CXX)
set_property(TARGET stack PROPERTY CXX_STANDARD 14)
