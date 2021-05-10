set(CPP_PRACTICE_EXE_SRCS
    ${CMAKE_CURRENT_LIST_DIR}/main.cpp
)

add_executable(cpp_practice_exe ${CPP_PRACTICE_EXE_SRCS})

target_include_directories(cpp_practice_exe PRIVATE ${PROJECT_SOURCE_DIR}/src/lib)

target_link_libraries(cpp_practice_exe PUBLIC lib)