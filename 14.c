#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct atleta{
    char nome[50];
    char esporte[50];
    float altura;
    int idade;
};
typedef struct atleta atleta;

int main(){
    int i;
    int maisVelho;
    float maisAlto;
    int indice_maisVelho;
    int indice_maisAlto;

    atleta Lista[5];

    for (i = 0; i < 5; i++){
        printf("Digite o nome do atleta(%d): ", i+1);
        scanf("%s", Lista[i].nome);
        fflush(stdin);
        
        printf("Digite o esporte: ");
        scanf("%s", Lista[i].esporte);
        fflush(stdin);
        
        printf("Digite a altura do atleta: ");
        scanf("%f", &Lista[i].altura);
        fflush(stdin);
        
        printf("Digite a idade do atleta: ");
        scanf("%d", &Lista[i].idade);
        fflush(stdin);

        if (i == 0){
            maisVelho = Lista[i].idade;
        }
        else{
            if(Lista[i].idade > maisVelho){
                maisVelho = Lista[i].idade;
                indice_maisVelho = i;
            }
        }
        if (i == 0){
            maisAlto = Lista[i].altura;
        }
        else{
            if(Lista[i].altura > maisAlto){
                maisAlto = Lista[i].altura;
                indice_maisAlto = i;
            }
        }
        
    }
    
    printf("Atleta mais alto: %s, %.2f\n", Lista[indice_maisAlto].nome, maisAlto);    
    printf("Atleta mais Velho: %s, %d\n", Lista[indice_maisVelho].nome, maisVelho);

    return 0;
}