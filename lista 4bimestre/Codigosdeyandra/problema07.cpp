#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nome;
    double valor_hora, horas, pagamento;

    cout << fixed << setprecision(2);

    cout << "Nome do funcionario: ";
    cin >> nome;
    cout << "Valor por hora: ";
    cin >> valor_hora;
    cout << "Horas trabalhadas: ";
    cin >> horas;

    pagamento = valor_hora * horas;

    cout << "O pagamento para " << nome << " deve ser " << pagamento << endl;

    return 0;
}
