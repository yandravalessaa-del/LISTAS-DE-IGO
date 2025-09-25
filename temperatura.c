#include <stdio.h>

int main() {
    char escala;
    float temp, convertido;

    printf("Digite a escala de entrada (C ou F): ");
    scanf(" %c", &escala);
    printf("Digite a temperatura: ");
    scanf("%f", &temp);

    if (escala == 'C' || escala == 'c') {
        convertido = (temp * 9 / 5) + 32;
        printf("Temperatura em Fahrenheit: %.2f F\n", convertido);
    } else if (escala == 'F' || escala == 'f') {
        convertido = (temp - 32) * 5 / 9;
        printf("Temperatura em Celsius: %.2f C\n", convertido);
    } else {
        printf("Escala invalida!\n");
    }

    return 0;
}
