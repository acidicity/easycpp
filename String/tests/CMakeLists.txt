cmake_minimum_required(VERSION 3.10)

project(tests)

set(Sources
    src/test.cpp
)

add_executable(tests ${Sources})

target_link_libraries(tests PUBLIC String)