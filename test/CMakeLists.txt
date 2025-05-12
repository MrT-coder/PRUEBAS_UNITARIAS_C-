# Ejecutable de tests
add_executable(factorial_test
  factorial_test.cpp
)
target_link_libraries(factorial_test
  PRIVATE factorial_lib
          gtest_main
)

include(GoogleTest)
gtest_discover_tests(factorial_test)
