#include <stdio.h>

int main(){
    int vetor[8];
    int soma = 0;
    int i, y, x;

    for ( i = 0; i < 8; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    printf("Digite o primeiro indice: ");
    scanf("%d", &y);

    printf("Digite o segundo indice: ");
    scanf("%d", &x);

    if ((x >= 0 && x < 8) && (y >= 0 && y < 8)){
    
    soma = vetor[y] + vetor[x];

    printf("Soma dos valores nas posicoes %d e %d: %d", y, x, soma);
    }
    else {
    printf("Índices inválidos. Digite valores entre 0 e 7.");
    return 1;
    }
    return 0;
}