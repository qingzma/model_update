cmake_minimum_required(VERSION 3.14)
project(shared_lib)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE Release)

include_directories(include)
include_directories(include/io)

#file(GLOB SOURCES "src/*.cpp")
set(SOURCES
        src/io/csv_reader.cpp
        src/main.cpp include/io/csv_reader.h

        )

add_executable(testStudent  ${SOURCES})

#install(TARGETS testStudent DESTINATION /Users/scott/bin)

