cmake_minimum_required(VERSION 3.21.2)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_subdirectory(lme_face_recognition)
add_subdirectory(lme_face_recognition_core)