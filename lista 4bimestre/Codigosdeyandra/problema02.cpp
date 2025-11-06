#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double base, altura, area, perimetro, diagonal;

    cout << fixed << setprecision(4);

    cout << "Digite a base do retangulo: ";
    cin >> base;
    cout << "Digite a altura do retangulo: ";
    cin >> altura;

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(base * base + altura * altura);

    cout << "Area = " << area << endl;
    cout << "Perimetro = " << perimetro << endl;
    cout << "Diagonal = " << diagonal << endl;

    return 0;
}
