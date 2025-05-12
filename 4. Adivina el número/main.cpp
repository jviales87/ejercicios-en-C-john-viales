#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int inicio, fin;

    // Solicitar al usuario el rango de números
    cout << "Ingrese el número inicial del rango: ";
    cin >> inicio;
    cout << "Ingrese el número final del rango: ";
    cin >> fin;

    // Validar que el rango sea correcto
    if (inicio > fin) {
        cout << "Error: El número inicial debe ser menor o igual al número final." << endl;
        return 1; // Termina el programa con código de error
    }

    cout << "\nMúltiplos de 3 en el rango [" << inicio << ", " << fin << "]:" << endl;
    cout << "------------------------------------------" << endl;

    int contador = 0;

    // Bucle for que recorre los números en el rango especificado
    for (int i = inicio; i <= fin; i++) {
        if (i % 3 == 0) { // Verifica si el número es múltiplo de 3
            cout << setw(5) << i << " "; // Formato con espacios alineados
            contador++;

            // Salto de línea cada 10 números para mejor presentación
            if (contador % 10 == 0) {
                cout << endl;
            }
        }
    }

    cout << "\n------------------------------------------" << endl;
    cout << "Total de múltiplos de 3 encontrados: " << contador << endl;

    return 0;
}
