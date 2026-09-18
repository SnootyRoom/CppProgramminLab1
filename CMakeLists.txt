cmake_minimum_required(VERSION 3.10.0)
project(CppProgramminLab1 VERSION 0.1.0 LANGUAGES C CXX)

add_executable(CppProgramminLab1 main.cpp)



option(ENABLE_ASAN "Enable Address Sanitizer" OFF)

if(ENABLE_ASAN)
    if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
        add_compile_options(-fsanitize=address,undefined -fno-omit-frame-pointer)
        add_link_options(-fsanitize=address,undefined)
        message(STATUS "AddressSanitizer and UndefinedBehaviorSanitizer are enabled")
    endif()
endif()
