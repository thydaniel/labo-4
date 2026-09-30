#include <iostream>
using namespace std;

int main() {
    int opcion;
    float radio, lado, base,
    altura, area;
    const float PI = 3.1416;

    cout << "1. Circulo" << endl;
    cout << "2. Cuadrado" << endl;
    cout << "3 Triangulo" << endl;
    cout << "Seleccione una opcion:";
    cin >> opcion;
    switch(opcion) {
        case 1:
        cout << "ingrese el radio de el circulo:";
        cin >> radio;
        area = PI * radio * radio;
        cout << "el area de el circulo es:" <<area << endl;
        break;

        case 2:
        cout << "ingrese el lado de el cuadrado:";
        cin >> lado;
        area = lado * lado;
        cout << "el area de el cuadrado es:" <<area << endl;
        break;

        case 3:
        cout << "ingrese la base de el triangulo:";
        cin >> base;
        cout << "ingrese la altura de el tiangulo:";
        cin >> altura;
        area = (base * altura) / 2;
        cout << "el area de el triangulo es:" << area << endl;
        break;

        default:
        cout << "opcion no valida." << endl;
    }

    return 0;

}
