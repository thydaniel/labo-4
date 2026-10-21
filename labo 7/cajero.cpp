#include <iostream>
using namespace std;

int main() {
    float saldo = 1000.0;
    float cantidad = 0.0;
    int opcion = 0;

    do {
        cout << "\n--- CAJERO AUTOMATICO ---" << endl;
        cout << "1. Depositar" << endl;
        cout << "2. Retirar" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese la cantidad a depositar: ";
                cin >> cantidad;

                if (cantidad > 0) {
                    saldo = saldo + cantidad;
                    cout << "Deposito realizado." << endl;
                } else {
                    cout << "Cantidad no valida." << endl;
                }
                break;

            case 2:
                cout << "Ingrese la cantidad a retirar: ";
                cin >> cantidad;

                if (cantidad > 0 && cantidad <= saldo) {
                    saldo = saldo - cantidad;
                    cout << "Retiro realizado." << endl;
                } else {
                    cout << "Cantidad no valida o saldo insuficiente." << endl;
                }
                break;

            case 3:
                cout << "Gracias por utilizar el cajero." << endl;
                break;

            default:
                cout << "Opcion no valida." << endl;
        }

        cout << "Saldo actual: $" << saldo << endl;

    } while (opcion != 3);

    return 0;
}