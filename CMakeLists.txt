cmake_minimum_required(VERSION 3.17)
project(Test)

set(CMAKE_CXX_STANDARD 14)

add_executable(Test main.cpp)

add_executable(1098 1098/1098.cpp)
add_executable(testvector 1098/testvector.cpp)
add_executable(1091 1091/1091.cpp)
add_executable(BFS 1091/BFS/BFS.cpp)
add_executable(justforfun for_fun/justforfun.cpp)
add_executable(1001 1001/1001.cpp)
add_executable(testsprintf 1001/testsprintf.cpp)
add_executable(10001 1001/10001.cpp)
add_executable(headofgang 1034/headofgang.cpp)
add_executable(headofgangexample 1034/headofgangexample.cpp)
add_executable(practiceMap 1034/practiceMap.cpp)