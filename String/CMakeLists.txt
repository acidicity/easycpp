cmake_minimum_required(VERSION 3.10)

project(String)

set(Sources
    src/string.cpp
)

set(Headers
    include/easycpp/string.h
)

add_library(String STATIC ${Sources} ${Headers})

target_include_directories(String PUBLIC include)

add_subdirectory(tests)