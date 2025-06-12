#include <stdio.h>
#include <string.h>

struct cadastro_aluno{
    int matricula;
    char nome[50];
    float prova1;
    float prova2;
    float prova3;
};

typedef struct cadastro_aluno alunos;

int main(){
    int i;
    float media;
    float maior_media;
    int indice_maior_media = 0;
    
    alunos lista[5];

    for ( i = 0; i < 5; i++){
        printf("Digite os dados dos alunos (%d):\n", i+1);

       printf("Digite o nome do aluno: ");
       scanf(" %s", lista[i].nome);

       printf("Digite o numero da matricula do aluno: ");
       scanf("%d", &lista[i].matricula);

       printf("Digite a nota da primeira prova do aluno: ");
       scanf("%f", &lista[i].prova1);

       printf("Digite a nota da segundo prova do aluno: ");
       scanf("%f", &lista[i].prova2);

       printf("Digite a nota da terceira prova do aluno: ");
       scanf("%f", &lista[i].prova3);
 
       media = (lista[i].prova1 + lista[i].prova2 + lista[i].prova3) / 3;

       if (i == 0){
        maior_media = media;
       } 
        else{
            if (media > maior_media){
            maior_media = media;
            indice_maior_media = i;
            }
        }
    }

    printf("Aluno com maior media: %s, %.2f\n", lista[indice_maior_media].nome, maior_media);
       
    return 0;
}