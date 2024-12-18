#include <iostream>
#include <cmath>

using namespace std;

double calcularArea(double radio) {
    return M_PI * pow(radio, 2);
}

int main() {
    double radio;
    cout << "Ingrese el radio del círculo: ";
    cin >> radio;

    double area = calcularArea(radio);

    cout << "El área del círculo es: " << area << endl;

    return 0;
}
