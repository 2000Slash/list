project(List)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "lib/*.c")
add_library(List ${SOURCES})

file(GLOB_RECURSE TESTSOURCES RELATIVE ${CMAKE_SOURCE_DIR} "tests/*.c")
add_executable(TestList ${TESTSOURCES})
target_include_directories(TestList PUBLIC "include")
target_include_directories(List PUBLIC "include")
target_link_libraries(TestList List)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_BUILD_TYPE RelWithDebInfo)
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")
