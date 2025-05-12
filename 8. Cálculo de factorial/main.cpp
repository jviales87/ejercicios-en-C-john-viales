#include <iostream>

using namespace std;

int main() {
    int numero, factorial = 1;

    // Solicitar un número al usuario
    cout << "Ingrese un número para calcular su factorial: ";
    cin >> numero;

    // Calcular el factorial con un bucle for
    for (int i = 1; i <= numero; i++) {
        factorial *= i; // Multiplicar por cada número hasta el ingresado
    }

    // Mostrar el resultado
    cout << "El factorial de " << numero << " es: " << factorial << endl;

    return 0;
}
