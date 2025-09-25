#include <stdio.h>

int main() 
{
    float vetor[8], soma = 0;
    int i;
    
    for(i = 0; i < 8; i++) {
        printf("Digite o %dº numero real: ", i+1);
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }
    
    printf("Media dos valores: %.2f\n", soma/8);
    return 0;
}
