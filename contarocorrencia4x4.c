#include <stdio.h>

int contarOcorrencias(int M[4][4], int num) {
    int cont = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (M[i][j] == num) {
                cont++;
            }
        }
    }
    return cont;
}

int main() {
    int M[4][4] = {
        {1, 2, 3, 4},
        {5, 1, 6, 1},
        {7, 8, 1, 9},
        {1, 10, 11, 12}
    };

    int num;
    printf("Digite o numero a procurar: ");
    scanf("%d", &num);

    printf("O numero %d aparece %d vezes.\n", num, contarOcorrencias(M, num));
    return 0;
}
