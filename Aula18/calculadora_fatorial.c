#include <stdio.h>

long long calcularFatorial(int numero) {
    long long fatorial = 1;

    for (int i = 1; i <= numero; i++) {
        fatorial = fatorial * i;
    }

    return fatorial;
}

int main(void) {
    int numero;

    do {
        printf("Digite um numero entre 0 e 12: ");
        scanf("%d", &numero);

        if (numero < 0 || numero > 12) {
            printf("Numero invalido! Tente novamente.\n");
        }

    } while (numero < 0 || numero > 12);

    printf("%d! = %lld\n", numero, calcularFatorial(numero));

    return 0;
}