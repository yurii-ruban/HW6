cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(TestApp)

set(SOURCES main.cpp)
add_subdirectory(lib)

add_executable(testapp ${SOURCES})
target_link_libraries(testapp fwrapper)
target_include_directories(testapp PUBLIC include)
