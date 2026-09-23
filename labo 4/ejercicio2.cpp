#include <iostream>
using namespace std;

int main() {
    float compra, descuento, total;
    cout << "ingrese el monto de la compra: ";
    cin >> compra;
    if (compra > 100 && compra <= 200) {
        descuento=compra * 0.10;
        total=compra - descuento;
        cout << "el total a pagar con descuento es: " << total;
    } else if (compra > 200) {
        descuento=compra * 0.20;
        total=compra - descuento;
        cout << "el total a pagar con descuento es: " << total;
    } else {
        cout << "no aplica descuento";
    }
    return 0;
}