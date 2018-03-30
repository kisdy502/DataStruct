cmake_minimum_required(VERSION 3.8)
project(DataStruct)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp SelectSort.cpp SelectSort.h QuickSort.cpp QuickSort.h BubbleSort.cpp BubbleSort.h InsertSort.cpp InsertSort.h Printer.cpp Printer.h ShellSort.cpp ShellSort.h MergeSort.cpp MergeSort.h)
add_executable(DataStruct ${SOURCE_FILES} BubbleSort.cpp)