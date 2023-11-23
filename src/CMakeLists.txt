add_subdirectory(hello)
add_subdirectory(world)
add_subdirectory(math)

include_directories(hello)
include_directories(world)
include_directories(math)

add_executable(main main.cpp)
add_dependencies(main hello world math)
target_link_libraries(main hello world math)