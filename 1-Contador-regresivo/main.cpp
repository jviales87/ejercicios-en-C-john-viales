#include <iostream>

using namespace std;

int main() {
    int numero;

    // Pedir al usuario un número
    cout << "Ingrese un número para iniciar la cuenta regresiva: ";
    cin >> numero;

    // Mostrar la cuenta regresiva
    cout << "Cuenta regresiva:" << endl;
    while (numero >= 0) {
        cout << numero << endl;
        numero--; // Decrementar el número
    }

    cout << "¡Despegue!" << endl;

    return 0;
}
