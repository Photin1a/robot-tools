cmake_minimum_required(VERSION 3.5)
project(navigation-tool VERSION 0.1 LANGUAGES CXX)
set(EXPORT_COMPILE_COMMANDS on)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)

list(APPEND CMAKE_PREFIX_PATH "/opt/Qt/5.15.2/gcc_64" )
find_package(Qt5 REQUIRED COMPONENTS Widgets)

include_directories(include)

add_subdirectory(plugins)
add_executable(navigation-tool
    main.cpp
    src/mainwindow.cpp
    include/mainwindow.h
    include/abstractplugin.h
    resources/res.qrc
)
set_property(TARGET navigation-tool PROPERTY AUTOUIC_SEARCH_PATHS ${CMAKE_CURRENT_SOURCE_DIR}/ui)
target_link_libraries(navigation-tool PRIVATE
    Qt5::Core
    Qt5::Widgets
)
