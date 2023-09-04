cmake_minimum_required(VERSION 3.26)
project(prg2)

set(CMAKE_CXX_STANDARD 14)

include_directories("Projeto de login")

add_executable(prg2
        "Projeto de login/Login.cpp"
        "Projeto de login/Login.h"
        "Projeto numeros complexos/numeroComplexo.cpp"
        "Projeto numeros complexos/numeroComplexo.h")
