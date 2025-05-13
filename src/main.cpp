#include <iostream>
#include "factorial.h"

int main() {
    int numero;
    std::cout << "Introduce un número: ";
    if (!(std::cin >> numero)) {
        std::cerr << "Entrada inválida\n";
        return 1;
    }
    std::cout << "Factorial de " << numero << " es " << factorial(numero) << "\n";
    return 0;
}
