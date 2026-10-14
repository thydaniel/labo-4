#include <iostream>
using namespace std;

int main() {
    int numero;
    int i;

    cout << "ingrese el numero: ";
    cin >> numero;
    for (i = 5; i <= numero; i += 5) {
        cout << i << endl;
    }

    return 0;
}