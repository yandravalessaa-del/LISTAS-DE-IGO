#include <iostream>
using namespace std;

int main() {
    int duracaoSeg, horas, minutos, segundos;

    cout << "Digite a duracao em segundos: ";
    cin >> duracaoSeg;

    horas = duracaoSeg / 3600;
    minutos = (duracaoSeg % 3600) / 60;
    segundos = duracaoSeg % 60;

    cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}
