#include <stdio.h>

int main(){
    int x[10];
    int maior, menor;
    int i;

    for ( i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &x[i]);
        
        if (i == 0){
            maior = x[0];
            menor = x[0];
        }
        else{
            if (x[i] > maior){
                maior = x[i];
            }
            if (x[i] < menor){
                menor = x[i];
            }
        }
    }
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}