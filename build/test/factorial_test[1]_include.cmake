if(EXISTS "/mnt/e/OCTAVO SEMESTRE/CONSTRUCCIÓN/PARCIAL 1/PRUEBAS_UNITARIAS_C-/build/test/factorial_test[1]_tests.cmake")
  include("/mnt/e/OCTAVO SEMESTRE/CONSTRUCCIÓN/PARCIAL 1/PRUEBAS_UNITARIAS_C-/build/test/factorial_test[1]_tests.cmake")
else()
  add_test(factorial_test_NOT_BUILT factorial_test_NOT_BUILT)
endif()
