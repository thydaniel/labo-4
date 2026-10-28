#include <iostream>
using namespace std;

float celsiusAFahrenheit(float celsius) {
    return celsius * 9 / 5 + 32;
}

int main() {
    float c;
    cout << "Temperatura en Celsius: ";
    cin >> c;
    cout << c << " C = " << celsiusAFahrenheit(c) << " F" << endl;
    return 0;
}