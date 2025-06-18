#include <stdio.h>
#include <string.h>
#include <locale.h>

// Definindo a estrutura
struct notas {
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
    float mediaA;
    float mediaP;
};

typedef struct notas notas;

// Criando vetor global
notas dados[100];

// Função para calcular a média aritmética
void mediaA(int i) {
    getchar(); // Limpa o buffer de entrada antes do fgets

    printf("Digite o nome do aluno: ");
    fgets(dados[i].nome, 50, stdin);
    dados[i].nome[strcspn(dados[i].nome, "\n")] = '\0'; // Remove o \n do final
    fflush(stdin);

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &dados[i].nota1);
    fflush(stdin);

    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &dados[i].nota2);
    fflush(stdin);

    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &dados[i].nota3);
    fflush(stdin);

    dados[i].mediaA = (dados[i].nota1 + dados[i].nota2 + dados[i].nota3) / 3;

    printf("Media aritmetica do aluno %s: %.2f\n", dados[i].nome, dados[i].mediaA);
}

void mediaP(int j) {
    getchar(); // Limpa o buffer de entrada antes do fgets

    printf("Digite o nome do aluno: ");
    fgets(dados[j].nome, 50, stdin);
    dados[j].nome[strcspn(dados[j].nome, "\n")] = '\0'; // Remove o \n do final
    fflush(stdin);

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &dados[j].nota1);
    fflush(stdin);

    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &dados[j].nota2);
    fflush(stdin);

    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &dados[j].nota3);
    fflush(stdin);   

    dados[j].mediaP = (dados[j].nota1* 5 +dados[j].nota2 * 3 +dados[j].nota3 * 2) / (5 + 3 + 2);

    printf("Media ponderada do aluno %s: %.2f\n", dados[j].nome, dados[j].mediaP);
}

int main() {
    setlocale(LC_ALL,"Portuguese");

    char opcao;
    int indice = 0; // Índice do aluno no vetor

    printf("---- Media de Notas ----\n");
    printf("Opcao A para media aritmetica\n");
    printf("Opcao P para media ponderada\n");
    printf("Escolha a opcao: ");
    scanf(" %c", &opcao); // Espaço antes do %c para consumir o \n anterior

    if (opcao == 'A' || opcao == 'a') {
        mediaA(indice);
    }
    else if (opcao == 'P' || opcao == 'p'){
        mediaP(indice);
        }
    else {
        printf("Opcao invalida ou funcao nao implementada.\n");
    }
        
    return 0;
}