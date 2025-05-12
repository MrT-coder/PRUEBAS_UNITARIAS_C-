#include <iostream>
#include "factorial.h"

int main() {
    int n;
    std::cout << "Introduce un número: ";
    if (!(std::cin >> n)) {
        std::cerr << "Entrada inválida\n";
        return 1;
    }
    std::cout << "Factorial de " << n << " es " << factorial(n) << "\n";
    return 0;
}
