#include <stdio.h>

int main() {
    char nome[50];
    double valorHora, pagamento;
    int horas;

    printf("Digite o nome do funcionario: ");
    scanf("%s", nome);
    printf("Digite o valor por hora: ");
    scanf("%lf", &valorHora);
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%d", &horas);

    pagamento = valorHora * horas;

    printf("O pagamento para %s deve ser %.2lf\n", nome, pagamento);

    return 0;
}
