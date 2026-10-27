#include <stdio.h>

int main(void) {
    char palavra[100];
    int contador = 0;

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == 'a' ||
            palavra[i] == 'e' ||
            palavra[i] == 'i' ||
            palavra[i] == 'o' ||
            palavra[i] == 'u') {
            contador++;
        }
    }

    printf("Quantidade de vogais: %d\n", contador);

    return 0;
}