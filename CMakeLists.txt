cmake_minimum_required(VERSION 3.28)

project(AstrophysicsToolkit)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(AstrophysicsToolkit
    src/units.cpp
)

target_include_directories(AstrophysicsToolkit PUBLIC include)

