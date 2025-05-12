#include <iostream>
#include <string>

using namespace std;
int main() {
    string frase;
    int mayusculas = 0, minusculas = 0;

    // Pedir al usuario una frase
    cout << "Ingrese una frase: ";
    getline(cin, frase);

    // Recorrer la frase y contar mayúsculas y minúsculas
    for (char c : frase) {
        if (isupper(c)) {
            mayusculas++;
        } else if (islower(c)) {
            minusculas++;
        }
    }

    // Mostrar los resultados
    cout << "Cantidad de letras mayúsculas: " << mayusculas << endl;
    cout << "Cantidad de letras minúsculas: " << minusculas << endl;

    return 0;
}
