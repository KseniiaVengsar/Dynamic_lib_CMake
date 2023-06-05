cmake_minimum_required(VERSION 3.22.0)
project(DynLib)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(LibLibD SHARED
    ./DynLib/Header.h
    ./DynLib/Source.cpp)

# Устанавливаем путь для поиска заголовочных файлов
target_include_directories(LibLibD PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/DynLib)

add_executable(DynLibE
    ./LibTest/LibTest.cpp)

target_link_libraries(DynLibE LibLibD)



#cmake_minimum_required(VERSION 3.22.0)
#project(DynLib)
#set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
#add_library(LibLibD SHARED DynLib/Header.h DynLib/Source.cpp)
# Устанавливаем путь для поиска заголовочных файлов
#target_include_directories(LibLibD PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/DynLib)
#add_executable(DynLibE
 #  LibTest/LibTest.cpp)
#target_link_libraries(DynLibE LibLibD)