#include <stdio.h>

int main() 
{
    int vetor[15], i, maior, menor;
    
    for(i = 0; i < 15; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    maior = menor = vetor[0];
    
    for(i = 1; i < 15; i++) {
        if(vetor[i] > maior) maior = vetor[i];
        if(vetor[i] < menor) menor = vetor[i];
    }
    
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    return 0;
}
