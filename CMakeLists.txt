project(List)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "lib/*.c")
add_library(LibList ${SOURCES})

file(GLOB_RECURSE TESTSOURCES RELATIVE ${CMAKE_SOURCE_DIR} "tests/*.c")
add_executable(TestList ${TESTSOURCES})
target_include_directories(TestList PUBLIC "include")
target_include_directories(LibList PUBLIC "include")
target_link_libraries(TestList LibList)
