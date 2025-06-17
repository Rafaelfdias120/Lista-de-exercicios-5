#include <stdio.h>

enum mes {janeiro = 1, fevereiro, marco, abril, maio, junho, julho, agosto, setembro, outubro, novembro, dezembro};

int main(){

    int opcao;

    printf("Digite o numero do mes que deseja:");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case janeiro:
        printf("Janeiro: 31 Dias");
        break;
    case fevereiro:
        printf("fevereiro: 28 Dias");
        break;
    case marco:
        printf("Marco: 31 Dias");
        break;
    case abril:
        printf("Abril: 30 Dias");
        break;
    case maio:
        printf("Maio: 31 Dias");
        break;
    case junho:
        printf("Junho: 30 Dias");
        break;
    case julho:
        printf("Julho: 31 Dias");
        break;
    case agosto:
        printf("Agosto: 30 Dias");
        break;
    case setembro:
        printf("Setembro: 31 Dias");
        break;
    case outubro:
        printf("Outubro: 30 Dias");
        break;
    case novembro:
        printf("Novembro: 31 Dias");
        break;
    case dezembro:
        printf("Dezembro: 30 Dias");
        break;
    
    default:
        printf("Opcao invalida. Tente novamente.");
        break;
    }

    return 0;
}