#ifndef FACTORIAL_H
#define FACTORIAL_H

// Calcula n! de forma recursiva; devuelve 0 si n < 0
int factorial(int n) {
    int i;
    int f=1;
    if (n < 0) return 0;          // caso negativo
    for (i=1;i<=n;i++){
        f=f*i;
    }
    return f;
    
}


#endif // FACTORIAL_H
