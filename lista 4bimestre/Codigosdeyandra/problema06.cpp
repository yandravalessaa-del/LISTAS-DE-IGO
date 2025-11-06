#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double r, area;
    const double pi = 3.14159;

    cout << fixed << setprecision(3);

    cout << "Digite o raio do circulo: ";
    cin >> r;

    area = pi * pow(r, 2);

    cout << "AREA = " << area << endl;

    return 0;
}
