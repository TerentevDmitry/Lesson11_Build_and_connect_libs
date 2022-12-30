cmake_minimum_required(VERSION 3.8)

set(PROJECT_NAME "GreetingPerson")
project(${PROJECT_NAME})

#***
set (SOURCES_EXE "11_01_Prog.cpp")

#***
set (SOURCES_LIB "../11_01_StaticLib/Greeter.cpp")

set (HEADERS_LIB "../11_01_StaticLib/Greeter.h")

#***
add_library(GreeterPersonLib STATIC ${SOURCES_LIB} ${HEADERS_LIB})

add_executable(${PROJECT_NAME} ${SOURCES_EXE})

target_link_libraries(${PROJECT_NAME} GreeterPersonLib)