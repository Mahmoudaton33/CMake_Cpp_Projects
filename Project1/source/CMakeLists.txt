cmake_minimum_required(VERSION 3.5)
project(HelloApp
        VERSION 0.0.1       
        DESCRIPTION "Hello World Example"   
        LANGUAGES CXX )

#add_executable(HelloAppBin main.cpp
#                src/sum.cpp 
#                src/mult.cpp )

file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(HelloAppBin main.cpp ${SRC_FILES})



target_compile_features(HelloAppBin PRIVATE cxx_std_20)
target_include_directories(HelloAppBin PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
