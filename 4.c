#include <stdio.h>

int main(){
    float n[10];
    float positivos = 0; 
    int negativos = 0;
    int i;

    for ( i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%f", &n[i]);

        if (n[i] < 0){
            negativos++;
        }else if (n[i] > 0){
            positivos += n[i];
        }
    }
    printf("Quantidade de numeros negativos: %d\n", negativos);
    printf("Soma dos numeros positivos: %.2f\n", positivos);
    
    return 0;
}