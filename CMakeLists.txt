cmake_minimum_required(VERSION 3.16)
project(chaos_engine CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_compile_options(-Wall -Wextra)

add_library(engine src/physics.cpp src/rk4.cpp)
target_include_directories(engine PUBLIC include)

add_executable(orbit src/main.cpp)
target_link_libraries(orbit engine)

enable_testing()
add_executable(tests tests/test_physics.cpp)
target_link_libraries(tests engine)
add_test(NAME tests COMMAND tests)
