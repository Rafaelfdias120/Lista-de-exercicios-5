#include <stdio.h>

int main(){
    int matriz[3][3];
    int soma = 0, i, j;

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            printf("Digite um numero: ");
            scanf("%d", &matriz[i][j]);

            if (i == j){
                soma += matriz[i][j];
            }
        }
    }
    printf("Soma da diagonal principal: %d\n", soma);

    return 0;
}