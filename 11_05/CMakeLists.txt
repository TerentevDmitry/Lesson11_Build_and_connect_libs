cmake_minimum_required(VERSION 3.10)
#Название проекта
project(Figures) 
#Установка переменной со списком исходников для исполняемого файла
set (SOURCES_EXE main11_05.cpp PrintFigures.cpp) 
set (HEADERS_EXE PrintFigures.h)
#Установка переменной со списком исходников для библиотеки
set (SOURCES_LIB LibFigureDynamic/Figure.cpp LibFigureDynamic/Quadrilateral.cpp LibFigureDynamic/Triangle.cpp) 
set (HEADERS_LIB LibFigureDynamic/Figure.h LibFigureDynamic/Quadrilateral.h LibFigureDynamic/Triangle.h)
#Включение экспорта всех символов для создания динамической библиотеки
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
#Создание статической библиотеки с именем LeavingPersonLib
add_library(FiguresLib SHARED ${SOURCES_LIB} ${HEADERS_LIB}) 
#Создание исполняемого файла с именем LeavingPersonExe
add_executable(FiguresExe ${SOURCES_EXE})
#Линковка программы с библиотекой
target_link_libraries(FiguresExe FiguresLib)