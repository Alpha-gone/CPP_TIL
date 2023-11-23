cmake_minimum_required(VERSION 3.26)
project(cpp_til)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp_til Main.cpp
        module/chapter01/chapter01.cpp
        module/chapter01/chapter01.h
        module/chapter02/chapter02.cpp
        module/chapter02/chapter02.h
        module/chapter03/chapter03.h
        module/chapter03/chapter03.cpp
        module/chapter03/mypet.cpp
        module/chapter03/mypet.h
        module/chapter04/Animal.cpp
        module/chapter04/Animal.h
        module/chapter04/Date.cpp
        module/chapter04/Date.h
        module/starcraft/Marine.cpp
        module/starcraft/Marine.h
        module/starcraft/StarCraft.cpp
        module/starcraft/StarCraft.h
)
