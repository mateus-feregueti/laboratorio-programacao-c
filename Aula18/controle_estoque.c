#include <stdio.h>

int dobro(int quantidade) {
    return quantidade * 2;
}

int main(void) {
    int quantidade;
    int quantidadeFinal;

    printf("Digite a quantidade inicial de produtos: ");
    scanf("%d", &quantidade);

    quantidadeFinal = dobro(quantidade);

    printf("Quantidade inicial: %d\n", quantidade);
    printf("Quantidade final: %d\n", quantidadeFinal);

    return 0;
}