#include <stdio.h>
#include <string.h>

struct cadastro{
    char nome[50];
    char endereco[100];
    int idade;
};

typedef struct cadastro cadastro;

int main(){
    cadastro cad = {"teste1", "teste2", 0};

    printf("Digite o seu nome: ");
    scanf("%s", cad.nome);

    printf("Digite sua idade: ");
    scanf("%d", &cad.idade);

    printf("Digite o seu endereco: ");
    scanf("%s", cad.endereco);

    printf("valores lidos: \n");
    printf("Nome: %s\n", cad.nome);
    printf("Idade: %d\n", cad.idade);
    printf("Endereco: %s\n", cad.endereco);

    return 0;
}