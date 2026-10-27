#include <stdio.h>

int main(void) {
    char nome[100];

    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Nome informado: %s", nome);

    return 0;
}