cmake_minimum_required(VERSION 3.14)
project(FactorialProject VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Añade tu carpeta de headers
include_directories(${PROJECT_SOURCE_DIR}/include)

# Subdirectorios
add_subdirectory(src)

# Testing con GoogleTest
enable_testing()
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.12.1
)
# Para Windows: evita override de configuraciones
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_subdirectory(tests)
