#ifndef FACTORIAL_H
#define FACTORIAL_H

// Calcula n! de forma recursiva; devuelve 0 si n < 0
int factorial(int n) {
    if (n < 0) return 0;          // caso negativo
    return (n <= 1) ? 1 : n * factorial(n - 1);
}


#endif // FACTORIAL_H
