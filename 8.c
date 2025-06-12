#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], caractere;
    int i, contador = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    printf("Digite um caractere para substituir as vogais: ");
    scanf(" %c", &caractere);

    for (i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
            str[i] = caractere;
        }
    }

    printf("Nova string: %s", str);
    printf("Numero de vogais substituidas: %d\n", contador);

    return 0;
}
