cmake_minimum_required(VERSION 4.0)
project(Platinum)

set(SOURCES src/main.cc)
set(CMAKE_CXX_STANDARD 17) 

find_package(SFML COMPONENTS Graphics Window System REQUIRED)

add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} PRIVATE SFML::Graphics SFML::Window SFML::System)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/inc)