cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(FunctionWrapper)

set(SOURCES src/fwrapper.cpp)

add_library(fwrapper SHARED ${SOURCES})
target_include_directories(fwrapper PUBLIC include)
