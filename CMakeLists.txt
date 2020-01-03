cmake_minimum_required(VERSION 3.0)

project(stl)

file(GLOB sources src/*)
file(GLOB test_sources test/*)

set(cflags -g -Wall)
set(libs m)

add_library(${PROJECT_NAME} SHARED ${sources})
target_compile_options(${PROJECT_NAME} PRIVATE ${cflags})
target_link_libraries(${PROJECT_NAME} PRIVATE ${libs})

add_executable(${PROJECT_NAME}_test ${test_sources})
target_compile_options(${PROJECT_NAME}_test PRIVATE ${cflags})
target_link_libraries(${PROJECT_NAME}_test PRIVATE ${PROJECT_NAME} ${libs})
