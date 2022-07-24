cmake_minimum_required(VERSION 3.21.2)
project(lme_face_recognition)

set(SOURCES
    main.cpp
)

set(INCLUDE_DIRECTORIES
    ${CMAKE_SOURCE_DIR}
)

set(LINK_LIBRARIES
    lme_face_recognition_core
)

set(COMPILE_FEATURES
    cxx_std_20
)

add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE ${SOURCES})
target_link_libraries(${PROJECT_NAME} ${LINK_LIBRARIES})
target_compile_features(${PROJECT_NAME} PRIVATE ${COMPILE_FEATURES})
target_include_directories(${PROJECT_NAME} PRIVATE ${INCLUDE_DIRECTORIES})