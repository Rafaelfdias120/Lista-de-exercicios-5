#include <stdio.h>
#include <string.h>

int main() {
    char texto[1000];
    int i;

    printf("Digite uma frase: ");
    fgets(texto, sizeof(texto), stdin);

    for (i = 0; texto[i] != '\0'; i++) {
        if (texto[i] >= 'a' && texto[i] <= 'z') {
            texto[i] = ((texto[i] - 'a' + 3) % 26) + 'a';
        } else if (texto[i] >= 'A' && texto[i] <= 'Z') {
            texto[i] = ((texto[i] - 'A' + 3) % 26) + 'A';
        }
        // Outros caracteres (espaços, pontuação, etc.) não mudam
    }

    printf("Frase codificada: %s\n", texto);

    return 0;
}
