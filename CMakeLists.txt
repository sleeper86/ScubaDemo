cmake_minimum_required(VERSION 3.29)
project(ScubaDemo)

set(CMAKE_CXX_STANDARD 20)

add_executable(ScubaDemo main.cpp
        diveObj/DiveEntry.cpp
        diveObj/DiveEntry.h
        diveObj/DiveLog.cpp
        diveObj/DiveLog.h)
