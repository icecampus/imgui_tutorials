cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(CMakeExample VERSION 0.1.0 LANGUAGES CXX C)
set (CMAKE_CXX_STANDARD 17)

find_package(Boost REQUIRED COMPONENTS program_options)
find_package(magic_enum CONFIG REQUIRED)

add_executable(App src/app/main.cpp)
target_link_libraries(App PRIVATE magic_enum::magic_enum)
target_link_libraries(App PRIVATE Boost::program_options)