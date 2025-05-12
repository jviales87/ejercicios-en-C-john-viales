#include <iostream>

using namespace std;

int main() {
    int numero;

    // Bucle que se repite hasta que el usuario ingrese 0
    do {
        cout << "Ingrese un número (0 para salir): ";
        cin >> numero;

        if (numero > 0) {
            cout << "El número es positivo." << endl;
        } else if (numero < 0) {
            cout << "El número es negativo." << endl;
        }

    } while (numero != 0);

    cout << "Programa finalizado." << endl;

    return 0;
}
