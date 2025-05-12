#include <iostream>

using namespace std;

int main() {
    float num1, num2, resultado;
    char operacion;

    // Solicitar números al usuario
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    // Solicitar la operación deseada
    cout << "Seleccione una operación (+, -, *, /): ";
    cin >> operacion;

    // Usar switch para realizar la operación
    switch (operacion) {
        case '+':
            resultado = num1 + num2;
            cout << "El resultado de la suma es: " << resultado << endl;
            break;
        case '-':
            resultado = num1 - num2;
            cout << "El resultado de la resta es: " << resultado << endl;
            break;
        case '*':
            resultado = num1 * num2;
            cout << "El resultado de la multiplicación es: " << resultado << endl;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "El resultado de la división es: " << resultado << endl;
            } else {
                cout << "Error: No se puede dividir por cero." << endl;
            }
            break;
        default:
            cout << "Operación no válida. Inténtelo de nuevo." << endl;
    }

    return 0;
}
0
