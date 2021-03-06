cmake_minimum_required(VERSION 3.4)

project(hello_world)

## Compile as C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

## Compile with the highest warning level
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(${CMAKE_SOURCE_DIR}/include)

# Add executable / file de chay tren may tinh
add_executable(print_hello src/print_hello.cpp)
add_executable(basic_math src/basic_math.cpp)
add_executable(triangle src/triangle.cpp src/geometry.cpp)
add_executable(even_odd src/even_odd.cpp)
add_executable(d_AB src/d_AB.cpp src/geometry.cpp)
add_executable(prime src/prime.cpp)
add_executable(quadratic src/quadratic.cpp)
add_executable(array src/array.cpp)
add_executable(cpp_file src/cpp_file.cpp)
add_executable(standard_deviation src/standard_deviation.cpp)
add_executable(fibonacci src/fibonacci.cpp)
add_executable(search src/search.cpp)
add_executable(S_linearquation src/S_linearquation.cpp)
add_executable(pointcloud src/pointcloud.cpp src/geometry.cpp)
add_executable(relative_position_of_2_circles
               src/relative_position_of_2_circles.cpp src/geometry.cpp)
add_executable(projection_triangle. src/projection_triangle.cpp
                                    src/geometry.cpp)
add_executable(midperpendicular src/midperpendicular.cpp src/geometry.cpp)
add_executable(median_triangle src/median_triangle.cpp src/geometry.cpp)
add_executable(projection_3d src/projection_3d.cpp src/geometry.cpp)
add_executable(quadrilateral src/quadrilateral.cpp src/geometry.cpp)
add_executable(header_and_body src/header_and_body.cpp)

## Declare a C++ executable
add_executable(test_include src/test_include.cpp src/geometry.cpp)
