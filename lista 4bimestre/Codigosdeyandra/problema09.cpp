#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, B, C;
    double area_quadrado, area_triangulo, area_trapezio;

    cout << fixed << setprecision(4);

    cout << "Digite A: ";
    cin >> A;
    cout << "Digite B: ";
    cin >> B;
    cout << "Digite C: ";
    cin >> C;

    area_quadrado = A * A;
    area_triangulo = (A * B) / 2.0;
    area_trapezio = ((A + B) * C) / 2.0;

    cout << "Area do quadrado = " << area_quadrado << endl;
    cout << "Area do triangulo = " << area_triangulo << endl;
    cout << "Area do trapezio = " << area_trapezio << endl;

    return 0;
}
