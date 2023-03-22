# Copyright (c) 2023 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.19.0)

set(MBED_PATH ${CMAKE_CURRENT_SOURCE_DIR}/mbed-os CACHE INTERNAL "")
set(EXTERNAL_LIB_PROJECT ${CMAKE_CURRENT_SOURCE_DIR}/libraries CACHE INTERNAL "")
set(MBED_CONFIG_PATH ${CMAKE_CURRENT_BINARY_DIR} CACHE INTERNAL "")
set(APP_TARGET Koios-Racer)

include(${MBED_PATH}/tools/cmake/app.cmake)

project(${APP_TARGET})

add_subdirectory(${MBED_PATH})

# khang edit
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Racer)
include_directories(${EXTERNAL_LIB_PROJECT})
file(GLOB APP_SOURCES ${EXTERNAL_LIB_PROJECT}/*/*.cpp)
add_executable(${APP_TARGET}
    Racer/Racer.cpp
    ${APP_SOURCES}
)
# end khang edit
target_link_libraries(${APP_TARGET} mbed-os)

mbed_set_post_build(${APP_TARGET})

option(VERBOSE_BUILD "Have a verbose build process")
if(VERBOSE_BUILD)
    set(CMAKE_VERBOSE_MAKEFILE ON)
endif()