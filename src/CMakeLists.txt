# Biblioteca con la lógica de factorial
add_library(factorial_lib
  factorial.cpp
)
target_include_directories(factorial_lib
  PUBLIC ${PROJECT_SOURCE_DIR}/include
)

# Ejecutable principal
add_executable(factorial_main
  main.cpp
)
target_link_libraries(factorial_main
  PRIVATE factorial_lib
)
