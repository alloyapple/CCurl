cmake_minimum_required(VERSION 3.8)
project(Goose)


message(STATUS "start running cmake...")


FILE(GLOB_RECURSE swiftFiles
        "*.swift"
        "*.h"
        "*.c")

add_custom_target(Goose ALL
        COMMAND /home/color/Application/swift-4/usr/bin/swift build -v
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
        SOURCES ${swiftFiles})