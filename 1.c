#include <stdio.h>

int main(){
    int valores[5], i, j, media, soma = 0;

    for ( i = 0; i < 5; i++){
        printf("Digite uma valor: ");
        scanf("%d", &valores[i]);
        
        soma += valores[i];
    }

    media = soma / 5;

    for (j = 0; j < 5; j++){
        printf("Valores lidos: %d\n", valores[j]);
    }
    
    printf("Media dos valores lidos: %d", media);

    return 0;
}