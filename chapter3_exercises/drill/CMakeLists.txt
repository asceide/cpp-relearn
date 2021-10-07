cmake_minimum_required(VERSION 3.20)
project(drill)

set(CMAKE_CXX_STANDARD 14)

add_executable(drill main.cpp)
include_directories(../../bjorneheaders)
