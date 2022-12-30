cmake_minimum_required(VERSION 3.8)

#set(PROJECT_NAME GreetingPerson)
project(GreetingPerson)

#set (SOURCES 11_01_Prog.cpp)

#set (HEADERS)

add_library(GreeterPersonLib STATIC ../11_01_StaticLib/Greeter.cpp ../11_01_StaticLib/Greeter.h)

add_executable(GreetingPersonProg 11_01_Prog.cpp)

target_link_libraries(GreetingPersonProg GreeterPersonLib)