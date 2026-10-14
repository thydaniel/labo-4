#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "ingrese un numero:";
    cin >> numero;

    for (int i = numero; i >= 0; i--) {
        cout << i << endl;
    }
    return 0;
}