add_subdirectory(hello)
add_subdirectory(world)
add_subdirectory(math)
add_subdirectory(third_party)

include_directories(hello)
include_directories(world)
include_directories(math)

add_executable(main main.cpp)
target_link_libraries(main hello world math)

set(TEST_FILE add_test.cpp)
add_executable(MY_TEST ${TEST_FILE})
target_link_libraries(MY_TEST gtest_main math)

enable_testing()