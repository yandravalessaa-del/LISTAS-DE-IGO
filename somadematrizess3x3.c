#include <stdio.h>

int main() {
    int M[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int somaPrincipal = 0, somaSecundaria = 0;

    for (int i = 0; i < 3; i++) {
        somaPrincipal += M[i][i];
        somaSecundaria += M[i][2 - i];
    }

    printf("Soma diagonal principal: %d\n", somaPrincipal);
    printf("Soma diagonal secundaria: %d\n", somaSecundaria);

    return 0;
}
