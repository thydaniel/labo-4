#include <iostream>
using namespace std;

int main() {
    int numero = 1;
    int contador = 0;

    while (numero <= 100) {
        if (numero % 2 == 0) {
            contador++;
        }

        numero++;
    }

    cout << "Cantidad de numeros pares: "
         << contador << endl;

    return 0;
}