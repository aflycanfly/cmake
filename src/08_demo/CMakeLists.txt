#cmake版本
cmake_minimum_required(VERSION 3.0)
#项目名称
project(SOLDIERFIRE)

#CMAKE_CXX_FLAGS C++编译器选项
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g -O2 -Wall")
set(CMake_Build_Type Debug)

#include头文件目录 ${CMAKE_CURRENT_SOURCE_DIR} CMakeLists.txt所在目录
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
#生成可执行文件
add_executable(soldierfire ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp) 

