#include <stdio.h>

int main() {
    int M[2][2];

    printf("Digite os valores da matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    printf("Matriz completa:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
