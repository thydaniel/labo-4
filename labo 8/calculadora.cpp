#include <iostream>
using namespace std;

float sumar(float a, float b)      { return a + b; }
float restar(float a, float b)     { return a - b; }
float multiplicar(float a, float b){ return a * b; }
float dividir(float a, float b)    { return a / b; }

int main() {
    int opcion;
    float a, b;

    cout << "1. Sumar\n2. Restar\n3. Multiplicar\n4. Dividir\n";
    cout << "Elige una opcion: ";
    cin >> opcion;
    cout << "Ingresa dos numeros: ";
    cin >> a >> b;

    switch (opcion) {
        case 1:
            cout << "Resultado: " << sumar(a, b) << endl;
            break;
        case 2:
            cout << "Resultado: " << restar(a, b) << endl;
            break;
        case 3:
            cout << "Resultado: " << multiplicar(a, b) << endl;
            break;
        case 4:
            if (b == 0)
                cout << "Error: no se puede dividir entre cero" << endl;
            else
                cout << "Resultado: " << dividir(a, b) << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
    }
    return 0;
}