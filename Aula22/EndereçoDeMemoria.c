#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Valor: %d\n", numero);
    printf("Endereco: %p\n", (void *)&numero);

    return 0;
}