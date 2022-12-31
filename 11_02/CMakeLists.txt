cmake_minimum_required(VERSION 3.10)
#Название проекта
project(LeavingPerson) 
#Установка переменной со списком исходников для исполняемого файла
set (SOURCES_EXE 11_02.cpp) 
#set (HEADERS_EXE )
#Установка переменной со списком исходников для библиотеки
set (SOURCES_LIB Leaver.cpp) 
set (HEADERS_LIB Leaver.h)
#Создание статической библиотеки с именем LeavingPersonLib
add_library(LeavingPersonLib STATIC ${SOURCES_LIB} ${HEADERS_LIB}) 
#Создание исполняемого файла с именем LeavingPersonExe
add_executable(LeavingPersonExe ${SOURCES_EXE})
#Линковка программы с библиотекой
target_link_libraries(LeavingPersonExe LeavingPersonLib)
