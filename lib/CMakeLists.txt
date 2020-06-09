cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(FunctionWrapper)

add_library(fwrapper SHARED src/fwrapper.cpp)
target_include_directories(fwrapper PUBLIC include)
