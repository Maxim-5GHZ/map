cmake_minimum_required(VERSION 3.10)
project(Map)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(Classes)

set(SOURCES
    main.cpp
    Classes/Decoder.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})
