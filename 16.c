#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool ehQuadradoPerfeito(int numero) {
    if (numero < 0) {
        return false;
    }

    int raiz = (int)sqrt(numero);
    return (raiz * raiz == numero);
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (ehQuadradoPerfeito(num)) {
        printf("%d e um quadrado perfeito.\n", num);
    } else {
        printf("%d nao e um quadrado perfeito.\n", num);
    }

    return 0;
}
