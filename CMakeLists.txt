cmake_minimum_required(VERSION 3.29)
project(ScubaDemo)

set(CMAKE_CXX_STANDARD 20)

add_executable(ScubaDemo src/main.cpp
        src/diveObj/DiveEntry.cpp
        src/diveObj/DiveEntry.h
        src/diveObj/DiveLog.cpp
        src/diveObj/DiveLog.h)
