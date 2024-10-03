cmake_minimum_required(VERSION 3.30.4)

set(This labor5_1test)

set(Sources
   labor5_1test.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    laborw5_1
)

add_test(
    NAME ${This}
    COMMAND ${This}
)
