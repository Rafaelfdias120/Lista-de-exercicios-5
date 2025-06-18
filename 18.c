#include <stdio.h>

// Função que calcula as somas das diagonais principal e secundária
void somaDiagonais(int matriz[6][6], int *somaPrincipal, int *somaSecundaria) {
    *somaPrincipal = 0;
    *somaSecundaria = 0;

    for (int i = 0; i < 6; i++) {
        *somaPrincipal += matriz[i][i];          // diagonal principal
        *somaSecundaria += matriz[i][5 - i];    // diagonal secundária
    }
}

int main() {
    int matriz[6][6];
    int somaP, somaS;

    // Entrada dos valores da matriz
    printf("Digite os valores da matriz 6x6:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Chama a função para calcular as somas
    somaDiagonais(matriz, &somaP, &somaS);

    // Exibe os resultados
    printf("Soma da diagonal principal: %d\n", somaP);
    printf("Soma da diagonal secundaria: %d\n", somaS);

    return 0;
}
