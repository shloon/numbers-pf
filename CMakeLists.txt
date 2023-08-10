cmake_minimum_required(VERSION 3.8)
project(numbers_polyfill LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
option(BUILD_TESTING "Build tests" ON)

if(NOT CMAKE_CXX_STANDARD)
    set(CMAKE_CXX_STANDARD 14)
endif()

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(numbers_polyfill INTERFACE)
target_include_directories(numbers_polyfill INTERFACE include)

if(BUILD_TESTING)
    include(CTest)
    add_subdirectory(extern/doctest)
    include(extern/doctest/scripts/cmake/doctest.cmake)

    add_executable(numbers_polyfill_tests tests/main.cpp tests/custom_type_tests.cpp tests/value_tests.cpp)
    target_link_libraries(numbers_polyfill_tests PUBLIC numbers_polyfill doctest)
    doctest_discover_tests(numbers_polyfill_tests)

    if(${CMAKE_CXX_STANDARD} LESS "14")
        set_property(TARGET numbers_polyfill_tests PROPERTY CXX_STANDARD 14)
    endif()
endif()