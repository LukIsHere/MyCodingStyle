cmake_minimum_required(VERSION 3.10)
project(codingStyle VERSION 0.1.0)

#add_subdirectory() jeśli są

add_executable(codingStyle
src/MyC++Style.cpp
src/MyC++Style2.cpp
)

include_directories(include/)

#target_link_libraries() jeśli są