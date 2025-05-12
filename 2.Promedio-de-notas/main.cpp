#include <iostream>

using namespace std;

int main() {
    float nota, suma = 0;
    int cantidad = 5;

    // Pedir al usuario ingresar las notas
    cout << "Ingrese " << cantidad << " notas:" << endl;

    for (int i = 0; i < cantidad; i++) {
        cout << "Nota " << i + 1 << ": ";
        cin >> nota;
        suma += nota; // Acumular la suma de las notas
    }

    // Calcular el promedio
    float promedio = suma / cantidad;

    // Mostrar el resultado
    cout << "El promedio de las notas es: " << promedio << endl;

    return 0;
}
