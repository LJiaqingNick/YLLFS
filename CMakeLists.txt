cmake_minimum_required(VERSION 3.23)
project(YLLFS)

set(CMAKE_CXX_STANDARD 14)

add_executable(YLLFS main.cpp YLLFS.cpp YLLFS.h Block.h SuperBlock.cpp SuperBlock.h BitmapBlock.cpp BitmapBlock.h)
