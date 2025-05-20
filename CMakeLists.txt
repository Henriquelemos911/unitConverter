cmake_minimum_required(VERSION 3.10)
project(unitConverter)

add_executable(main main.cpp src/DistanceConverter.cpp 
                             src/TemperatureConverter.cpp
                             src/WeightConverter.cpp)
target_include_directories(main PRIVATE include)
