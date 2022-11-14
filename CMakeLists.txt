

cmake_minimum_required(VERSION 3.10)
project(POO_Matrice)
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
enable_testing()
add_executable(POO_Matrice main.cpp)
add_subdirectory(matrice)
target_link_libraries(POO_Matrice PUBLIC Matrice GTest::gtest_main)
target_include_directories(POO_Matrice PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/matrice" )
include(GoogleTest)
gtest_discover_tests(POO_Matrice)
