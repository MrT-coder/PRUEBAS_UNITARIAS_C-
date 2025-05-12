# define una librería de cabeceras solamente
add_library(factorial_lib INTERFACE)
target_include_directories(factorial_lib
  INTERFACE ${PROJECT_SOURCE_DIR}/include
)

# ejecutable principal
add_executable(factorial_main
  main.cpp
)
target_link_libraries(factorial_main
  PRIVATE factorial_lib
)
