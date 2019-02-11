cmake_minimum_required(VERSION 3.13)
project(CProgrammer C)

set(CMAKE_C_STANDARD 99)

add_executable(CProgrammer main.c cmake-build-debug/printresult.cpp dao/interfacedao.h daoimpl/daoimpl.h kata/katadao.h kataImpl/kataImpl.h)