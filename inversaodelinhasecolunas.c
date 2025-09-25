#include <stdio.h>

int main() {
    int M[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Matriz original:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    // Inversão de cada linha
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 / 2; j++) {
            int temp = M[i][j];
            M[i][j] = M[i][2 - j];
            M[i][2 - j] = temp;
        }
    }

    printf("Matriz modificada:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
