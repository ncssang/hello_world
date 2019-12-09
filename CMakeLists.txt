cmake_minimum_required(VERSION 3.4)

project(hello_world)

## Compile as C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

## Compile with the highest warning level
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

# Add executable / file de chay tren may tinh
add_executable(print_hello src/print_hello.cpp)
add_executable(basic_math src/basic_math.cpp)
add_executable(triangle src/triangle.cpp)
add_executable(even_odd src/even_odd.cpp)
add_executable(d_AB src/d_AB.cpp)
