#include <iostream>
using namespace std;

int main() {
    char opcion;
    cout << "ingrese un color (rojo= r, verde= v, amarillo= a)" << endl;
    cin >> opcion;

    switch(opcion) {
        case 'r':
            cout << "Semaforo en rojo." << endl;
            break;
        case 'v':
            cout << "Semaforo en verde." << endl;
            break;
        case 'a':
            cout << "Semaforo en amarillo." << endl;
            break;
        default:
            cout << "Color no valido." << endl;
    }

    return 0;
}