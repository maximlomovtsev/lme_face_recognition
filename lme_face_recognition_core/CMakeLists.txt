cmake_minimum_required(VERSION 3.21.2)
project(lme_face_recognition_core)

set(SOURCES
    impl/image.cpp
    impl/recognition_engine_impl.cpp
    model/rectangle.cpp
)

set(COMPILE_FEATURES
    cxx_std_20
)

add_library(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE ${SOURCES})
target_compile_features(${PROJECT_NAME} PRIVATE ${COMPILE_FEATURES})