#include <stdio.h>
#include <string.h>

struct cadastro_pessoas{
    char nome[50];
    int data_nascimento[3];
};

typedef struct cadastro_pessoas pessoas;

int main(){
    int i;
    // int mais_velho;
    //  int mais_novo;
    int indice_maisVelho = 0;
    int indice_maisNovo = 0;
    
    pessoas lista[6];
    
    for (i = 0; i < 6; i++){
        
        printf("Digite o seu nome: ");
        scanf(" %s", lista[i].nome);
        fflush(stdin);
        
        printf("Digite a sua data de nasciemnto: ");
        scanf("%d %d %d", &lista[i].data_nascimento[0], &lista[i].data_nascimento[1], &lista[i].data_nascimento[2]);
        fflush(stdin);

    }
    for (i = 1; i < 6; i++) {
    // Verifica mais velho
    if (
        lista[i].data_nascimento[2] < lista[indice_maisVelho].data_nascimento[2] || // ano
        (lista[i].data_nascimento[2] == lista[indice_maisVelho].data_nascimento[2] &&
        lista[i].data_nascimento[1] < lista[indice_maisVelho].data_nascimento[1]) || // mês
        (lista[i].data_nascimento[2] == lista[indice_maisVelho].data_nascimento[2] &&
         lista[i].data_nascimento[1] == lista[indice_maisVelho].data_nascimento[1] &&
         lista[i].data_nascimento[0] < lista[indice_maisVelho].data_nascimento[0]) // dia
    ) {
        indice_maisVelho = i;
    }

    // Verifica mais novo
    if (
        lista[i].data_nascimento[2] > lista[indice_maisNovo].data_nascimento[2] || // ano
        (lista[i].data_nascimento[2] == lista[indice_maisNovo].data_nascimento[2] &&
         lista[i].data_nascimento[1] > lista[indice_maisNovo].data_nascimento[1]) || // mês
        (lista[i].data_nascimento[2] == lista[indice_maisNovo].data_nascimento[2] &&
         lista[i].data_nascimento[1] == lista[indice_maisNovo].data_nascimento[1] &&
         lista[i].data_nascimento[0] > lista[indice_maisNovo].data_nascimento[0]) // dia
    ) {
        indice_maisNovo = i;
    }
}
    printf("Pessoa mais velha: %s\n", lista[indice_maisVelho].nome);
    printf("Pessoa mais nova: %s\n", lista[indice_maisNovo].nome);

    return 0;
}