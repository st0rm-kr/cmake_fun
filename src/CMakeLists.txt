add_subdirectory(hello)
add_subdirectory(world)

include_directories(hello)
include_directories(world)
add_executable(main main.cpp)
target_link_libraries(main hello world)

add_dependencies(main hello world)