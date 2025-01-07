cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(ImGuiExample VERSION 0.1.0 LANGUAGES CXX C)
set (CMAKE_CXX_STANDARD 17)

find_package(SFML COMPONENTS system window graphics audio CONFIG REQUIRED)
find_package(imgui CONFIG REQUIRED)    
find_package(ImGui-SFML CONFIG REQUIRED)

add_executable(App src/app/main.cpp)
target_link_libraries(App PRIVATE sfml-main)
target_link_libraries(App PRIVATE imgui::imgui)
target_link_libraries(App PRIVATE ImGui-SFML::ImGui-SFML)