#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double distancia, combustivel, consumo;

    cout << fixed << setprecision(3);

    cout << "Distancia percorrida (km): ";
    cin >> distancia;
    cout << "Combustivel gasto (litros): ";
    cin >> combustivel;

    consumo = distancia / combustivel;

    cout << "Consumo medio = " << consumo << " km/l" << endl;

    return 0;
}
