#include <iostream>

using namespace std;

int main() {
    float dolares, resultado;
    int opcion;
    const float tasaPesos = 57.5;  // Ejemplo: 1 USD = 57.5 DOP
    const float tasaEuros = 0.92;  // Ejemplo: 1 USD = 0.92 EUR
    const float tasaYenes = 150.3; // Ejemplo: 1 USD = 150.3 JPY

    do {
        // Mostrar el menú
        cout << "\nConversor de divisas" << endl;
        cout << "1. Dolares a Pesos Dominicanos" << endl;
        cout << "2. Dolares a Euros" << endl;
        cout << "3. Dolares a Yenes" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 3) {
            cout << "Ingrese la cantidad en dolares: ";
            cin >> dolares;
        }

        switch (opcion) {
            case 1:
                resultado = dolares * tasaPesos;
                cout << dolares << " USD son " << resultado << " DOP" << endl;
                break;
            case 2:
                resultado = dolares * tasaEuros;
                cout << dolares << " USD son " << resultado << " EUR" << endl;
                break;
            case 3:
                resultado = dolares * tasaYenes;
                cout << dolares << " USD son " << resultado << " JPY" << endl;
                break;
            case 4:
                cout << "Gracias por usar el conversor de divisas." << endl;
                break;
            default:
                cout << "Opcion no válida. Inténtelo de nuevo." << endl;
        }

    } while (opcion != 4);  // Repite mientras la opcion no sea salir

    return 0;
}
