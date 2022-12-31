cmake_minimum_required(VERSION 3.10)
#Название проекта
project(GreetingPerson) 
#Установка переменной со списком исходников для исполняемого файла
set (SOURCES_EXE 11_01.cpp) 
#set (HEADERS_EXE )
#Установка переменной со списком исходников для библиотеки
set (SOURCES_LIB Greeter.cpp) 
set (HEADERS_LIB Greeter.h)
#Создание статической библиотеки с именем GreetingPersonLib
add_library(GreetingPersonLib STATIC ${SOURCES_LIB} ${HEADERS_LIB}) 
#Создание исполняемого файла с именем GreetingPersonExe
add_executable(GreetingPersonExe ${SOURCES_EXE} )
#Линковка программы с библиотекой
target_link_libraries(GreetingPersonExe GreetingPersonLib)
