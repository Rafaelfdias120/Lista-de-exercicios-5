#include <stdio.h>

void maiorMenor(int vetor[], int tamanho, int *maior, int *menor) {
    *maior = vetor[0];
    *menor = vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];
        }
        if (vetor[i] < *menor) {
            *menor = vetor[i];
        }
    }
}

int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    printf("Digite os %d valores do vetor:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    int maior, menor;
    maiorMenor(vetor, n, &maior, &menor);

    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    return 0;
}