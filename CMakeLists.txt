cmake_minimum_required(VERSION 3.10)

# Име на проекта
project(CppCICDDemo LANGUAGES CXX)

# Използваме C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# -------- Library --------
add_library(math_utils
    src/math_utils.cpp
)

target_include_directories(math_utils
    PUBLIC
        ${PROJECT_SOURCE_DIR}/src
)

# Compiler warnings as errors
target_compile_options(math_utils
    PRIVATE
        -Wall
        -Wextra
        -Wpedantic
        -Werror
)

# -------- Tests executable --------
add_executable(tests
    tests/test_math.cpp
)

target_include_directories(tests
    PRIVATE
        ${PROJECT_SOURCE_DIR}/src
        ${PROJECT_SOURCE_DIR}/tests
)

target_link_libraries(tests
    PRIVATE
        math_utils
)

# -------- Enable testing (optional but good practice) --------
enable_testing()

add_test(
    NAME MathUtilsTests
    COMMAND tests
)
