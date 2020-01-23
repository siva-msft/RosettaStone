# Target name
set(target RosettaBattlegrounds)

# Includes
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Includes)

# Sources
file(GLOB_RECURSE sources
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

# Build library
add_executable(${target}
    ${sources}
)

# Project options
set_target_properties(${target}
    PROPERTIES
    ${DEFAULT_PROJECT_OPTIONS}
)

# Compile options
target_compile_options(${target}
    PUBLIC
    ${DEFAULT_COMPILE_OPTIONS}
)

# Compile definitions
target_compile_definitions(${target}
PUBLIC
    RESOURCES_DIR="${root_dir}/Resources/"
)

# Link libraries
target_link_libraries(${target}
    PUBLIC
    RosettaStone
    ${DEFAULT_LINKER_OPTIONS}
)