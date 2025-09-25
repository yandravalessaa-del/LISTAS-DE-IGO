#include <stdio.h>

int main() 
{
    int vetor[10], i, soma = 0;
    
    for(i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    
    printf("A soma dos elementos do vetor = %d\n", soma);
    return 0;
}