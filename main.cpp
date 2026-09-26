#include <iostream>

int main() {
    // 1. Constante: cantidad de números a leer
    const int CANTIDAD = 5;

    // 2. Arreglos, contador y suma (siempre inicializados)
    int numeros[CANTIDAD];
    int pares[CANTIDAD];
    int totalPares = 0;
    int sumaPares = 0;

    std::cout << "Guardar los numeros pares de " << CANTIDAD << " numeros\n";
    std::cout << "Ingresa " << CANTIDAD << " numeros: ";

    // 3. Ciclo: leer los 5 numeros, todos juntos
    for (int i = 0; i < CANTIDAD; i++) {
        std::cin >> numeros[i];
    }

    // 4. Ciclo: revisar cuales son pares, guardarlos y sumarlos
    for (int i = 0; i < CANTIDAD; i++) {
        if (numeros[i] % 2 == 0) {
            pares[totalPares] = numeros[i];
            sumaPares += numeros[i];
            totalPares++;
        }
    }

    // 5. Salida
    std::cout << "Pares encontrados: " << totalPares << "\n";

    if (totalPares == 0) {
        std::cout << "No hay numeros pares\n";
    } else {
        std::cout << "Los pares son: ";
        for (int i = 0; i < totalPares; i++) {
            std::cout << pares[i] << " ";
        }
        std::cout << "\n";
        std::cout << "Suma de los pares: " << sumaPares << "\n";
    }

    return 0;
}