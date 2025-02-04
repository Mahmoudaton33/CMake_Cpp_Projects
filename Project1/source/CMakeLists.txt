cmake_minimum_required(VERSION 3.5)
project(HelloApp
        VERSION 0.0.1       
        DESCRIPTION "Hello World Example"   
        LANGUAGES CXX )
add_executable(HelloAppBin main.cpp)
target_compile_features(HelloAppBin PRIVATE cxx_std_20)
