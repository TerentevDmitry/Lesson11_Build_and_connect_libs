# CMakeList.txt: проект CMake для 11_01; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.

cmake_minimum_required (VERSION 3.8)

#set(PROJECT_NAME 11_01_StaticLib)
project (11_01_StaticLib)

set (SOURCES Greeter.cpp)

set (HEADERS Greeter.h)

add_library(GreeterPersonLib ${SOURCES} ${HEADERS})


# Добавьте источник в исполняемый файл этого проекта.
#add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

#target_link_libraries(Greeter.cpp Greeter.h)


#if (CMAKE_VERSION VERSION_GREATER 3.12)
# set_property(TARGET 11_01 PROPERTY CXX_STANDARD 20)
#endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
