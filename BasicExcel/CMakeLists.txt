cmake_minimum_required(VERSION 3.15)
project(BasicExcel)

SET(CMAKE_CXX_STANDARD 11)
include_directories(.)
ADD_LIBRARY(static_BasicExcel STATIC BasicExcel.cpp ExcelFormat.cpp)
ADD_LIBRARY(shared_BasicExcel SHARED BasicExcel.cpp ExcelFormat.cpp)
ADD_EXECUTABLE(BasicExcel BasicExcel.cpp Examples.cpp ExcelFormat.cpp)