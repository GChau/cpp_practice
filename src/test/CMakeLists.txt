set(TEST_SRCS
    ${CMAKE_CURRENT_LIST_DIR}/test_main.cpp
    ${CMAKE_CURRENT_LIST_DIR}/dummy_test.cpp
    ${CMAKE_CURRENT_LIST_DIR}/catch.cpp
)

set(TEST_HEADERS
    ${CMAKE_CURRENT_LIST_DIR}/catch.cpp
    ${CMAKE_CURRENT_LIST_DIR}/catch.hpp
)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

add_executable(test ${TEST_SRCS} ${TEST_HEADERS})

set_property(TARGET test PROPERTY CXX_STANDARD 17)
set_property(TARGET test PROPERTY CXX_STANDARD_REQUIRED ON)

target_include_directories(test PRIVATE ${PROJECT_SOURCE_DIR}/src/lib)
#target_include_directories(test PRIVATE ${PROJECT_SOURCE_DIR}/dep/catch)

target_link_libraries(test PUBLIC lib)