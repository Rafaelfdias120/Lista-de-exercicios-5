#include <stdio.h>
#include <math.h>

// Função para calcular as raízes da equação do 2º grau
int bhaskara(float a, float b, float c, float *x1, float *x2) {
    if (a == 0) {
        printf("Nao e equacao de segundo grau\n");
        return -1;
    }

    float delta = b * b - 4 * a * c;

    if (delta < 0) {
        return 0; // Nenhuma raiz real
    } else if (delta == 0) {
        *x1 = -b / (2 * a);
        return 1; // Uma raiz real
    } else {
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
        return 2; // Duas raízes reais
    }
}

int main() {
    float a, b, c;
    float raiz1, raiz2;
    int num_raizes;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    num_raizes = bhaskara(a, b, c, &raiz1, &raiz2);

    if (num_raizes == -1) {
        // Mensagem já exibida na função
    } else if (num_raizes == 0) {
        printf("Nao existem raizes reais.\n");
    } else if (num_raizes == 1) {
        printf("Existe uma raiz real: %.2f\n", raiz1);
    } else {
        printf("Existem duas raizes reais: %.2f e %.2f\n", raiz1, raiz2);
    }

    return 0;
}
