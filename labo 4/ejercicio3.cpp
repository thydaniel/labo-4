#include <iostream>
using namespace std;
int main() {

    int num;
    cout << "ingrese un numero: ";
    cin >> num;

    if (num>0 && num<=100) {
        cout << "el numero se encuentra dentro del rango";
    } else {
        cout << "el numero no se encuentra dentro del rango";
    }
    return 0;
}