#include <iostream>
#include <string>

using namespace std;

int main() {
    string palabra;
    bool esPalindromo = true;

    // Solicitar la palabra al usuario
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    // Verificar si la palabra es un palindromo
    int longitud = palabra.length();
    for (int i = 0; i < longitud / 2; i++) {
        if (palabra[i] != palabra[longitud - i - 1]) {
            esPalindromo = false;
            break; // Si una letra no coincide, no es palindromo
        }
    }

    // Mostrar el resultado
    if (esPalindromo) {
        cout << "La palabra \"" << palabra << "\" es un palindromo." << endl;
    } else {
        cout << "La palabra \"" << palabra << "\" no es un palindromo." << endl;
    }

    return 0;
}
