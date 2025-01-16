cmake_minimum_required(VERSION 3.30)
project(UI_Maker)

set(CMAKE_CXX_STANDARD 26)

add_executable(UI_Maker main.cpp
        Class/uimaker.hpp
        Class/argparse.hpp
        Class/table.hpp)