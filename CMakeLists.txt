cmake_minimum_required(VERSION 3.0)

project(stl)

file(GLOB sources src/*)
file(GLOB test_sources test/*)
file(GLOB assets test/assets/*)

set(cflags -g -Wall)
set(libs m)

file(COPY ${assets} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

add_library(${PROJECT_NAME} SHARED ${sources})
target_compile_options(${PROJECT_NAME} PRIVATE ${cflags})
target_link_libraries(${PROJECT_NAME} PRIVATE ${libs})

add_executable(${PROJECT_NAME}_test ${test_sources})
target_include_directories(${PROJECT_NAME}_test PRIVATE ${CMAKE_SOURCE_DIR}/src)
target_compile_options(${PROJECT_NAME}_test PRIVATE ${cflags})
target_link_libraries(${PROJECT_NAME}_test PRIVATE ${PROJECT_NAME} ${libs})
