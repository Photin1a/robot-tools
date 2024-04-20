cmake_minimum_required(VERSION 3.5)
project(carmeracalibration VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

list(APPEND CMAKE_PREFIX_PATH "/opt/Qt/5.15.2/gcc_64" )
find_package(Qt5 REQUIRED COMPONENTS Widgets)
include_directories(include)

set(PLUGIN_DIR ${CMAKE_CURRENT_BINARY_DIR})
add_library(carmeracalibration SHARED 
src/carmeracalibration.cpp
include/carmeracalibration.h
include/abstractplugin.h
include/utils.hpp
)
set_property(TARGET carmeracalibration PROPERTY AUTOUIC_SEARCH_PATHS ${CMAKE_CURRENT_SOURCE_DIR}/ui)
set_target_properties(carmeracalibration PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY ${PLUGIN_DIR}
)
target_link_libraries(carmeracalibration PRIVATE
    Qt5::Core
    Qt5::Widgets
)
