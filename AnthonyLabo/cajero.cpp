#include <iostream>
using namespace std;

int main() {
    int opcion;
    float saldo = 1000.0;
    float monto;

    cout << "1. Retirar dinero" << endl;
    cout << "2. Depositar dinero" << endl;
    cout << "3. Salir" << endl;
    cout << "Seleccione una opcion:";
    cin >> opcion;

    switch(opcion) {
        case 1:
            cout << "Ingrese el monto a retirar:";
            cin >> monto;
            if (monto <= saldo) {
                saldo -= monto;
                cout << "Retiro exitoso. Su nuevo saldo es: $" << saldo << endl;
            } else {
                cout << "Fondos insuficientes." << endl;
            }
            break;
        case 2:
            cout << "Ingrese el monto a depositar:";
            cin >> monto;
            saldo += monto;
            cout << "Deposito exitoso. Su nuevo saldo es: $" << saldo << endl;
            break;
        case 3:
            cout << "Saliendo del programa." << endl;
            break;
        default:
            cout << "Opcion no valida." << endl;
    }

    return 0;
}