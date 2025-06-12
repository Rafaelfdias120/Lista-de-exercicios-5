#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, ehPalindromo = 1;

    printf("Digite uma palavra: ");
    fgets(str, sizeof(str), stdin);

    // Remover o caractere de nova linha, se existir
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            ehPalindromo = 0;
            break;
        }
    }

    if (ehPalindromo) {
        printf("E um palindromo.\n");
    } else {
        printf("Nao e um palindromo.\n");
    }

    return 0;
}
