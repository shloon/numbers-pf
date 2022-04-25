cmake_minimum_required(VERSION 3.8)
project(numbers_polyfill LANGUAGES CXX)

add_library(numbers_polyfill INTERFACE)
target_include_directories(numbers_polyfill INTERFACE include)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
