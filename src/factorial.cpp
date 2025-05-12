#include "factorial.h"

int factorial(int n) {
    if (n < 0) return 0;          // caso negativo
    return (n <= 1) ? 1 : n * factorial(n - 1);
}
