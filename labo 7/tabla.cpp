#include <iostream>
using namespace std;

int main() {
    int numero = 0;
    int i = 1;

    cout << "Ingrese un numero: ";
    cin >> numero;

    while (i <= 10) {
        cout << numero << " x " << i << " = "
             << numero * i << endl;
        i++;
    }

    return 0;
}