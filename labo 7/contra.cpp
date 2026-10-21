#include <iostream>
#include <string>
using namespace std;

int main() {
    string contraseña = "";

    do {
        cout << "Ingrese la contraseña: ";
        cin >> contraseña;

        if (contraseña != "password123") {
            cout << "Contraseña incorrecta." << endl;
        }

    } while (contraseña != "password123");

    cout << "Contraseña correcta. Acceso permitido." << endl;

    return 0;
}