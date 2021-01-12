cmake_minimum_required(VERSION 3.16)

project(das-big-txt-file-viewer)


find_package(
    Qt5
    COMPONENTS
        Widgets
        Gui
)

if (NOT TARGET Qt5::Widgets OR NOT TARGET Qt5::Gui)
    message(FATAL_ERROR "Cannot find Qt5")
endif (NOT TARGET Qt5::Widgets OR NOT TARGET Qt5::Gui)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(
    SOURCES
        src/main.cxx
)

set(
    HEADERS
)

set(
    UIS
)

set(
    QRCS
)

add_executable(
    das-big-txt-file-viewer
    ${SOURCES}
    ${HEADERS}
    ${UIS}
    ${QRCS}
)

target_link_libraries(
    das-big-txt-file-viewer
    PRIVATE
        Qt5::Gui
        Qt5::Widgets
)
