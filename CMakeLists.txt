cmake_minimum_required(VERSION 3.27)

set(PROJECT_NAME LibNya)
set(BINARY_NAME nya)

project(${PROJECT_NAME} C)

set(LIBRARY_VERSION_MAJOR 0)
set(LIBRARY_VERSION_STRING 0.1)

set(CMAKE_C_STANDARD 23)

include(GNUInstallDirs)

file(GLOB NYAN_SRC CONFIGURE_DEPENDS "src/*.c")
file(GLOB NYAN_HDR CONFIGURE_DEPENDS "include/*.h")

# ==================
# Project definition
# ==================

include_directories(include)

add_library(${BINARY_NAME} STATIC ${NYAN_SRC})

set_target_properties(
        ${BINARY_NAME} PROPERTIES
        VERSION        ${LIBRARY_VERSION_STRING}
        SOVERSION      ${LIBRARY_VERSION_MAJOR}
)

# ==================
# Adding compiler definitions, like debug symbols
# ==================
add_definitions("-g")

# ==================
# Library installation directives
# ==================
install(
        TARGETS ${BINARY_NAME}
        LIBRARY DESTINATION lib
)

install(
        FILES ${NYAN_HDR}
        DESTINATION include
)