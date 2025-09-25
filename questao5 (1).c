#include <stdio.h>

int main()
 {
    int vetor[10], i, num, encontrado = 0;
    
    for(i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    printf("Digite um numero para buscar: ");
    scanf("%d", &num);
    
    for(i = 0; i < 10; i++) {
        if(vetor[i] == num) {
            encontrado = 1;
            break;
        }
    }
    
    if(encontrado)
        printf("O numero %d foi encontrado no vetor.\n", num);
    else
        printf("O numero %d NAO esta presente no vetor.\n", num);
    
    return 0;
}
