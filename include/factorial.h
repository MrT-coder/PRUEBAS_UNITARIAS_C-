#ifndef FACTORIAL_H
#define FACTORIAL_H

// Calcula n! de forma iterativa; devuelve 0 si n < 0
int factorial(int numero) {
    int i;
    int factorial=1;
    if (numero < 0) return 0;          // caso negativo
    for (i=1;i<=numero;i++){
        factorial=factorial*i;
    }
    return factorial;
    
}


#endif // FACTORIAL_H
