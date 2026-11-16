#include <stdio.h>

int main(void) {
    int numeros[5];
    int *p = numeros;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nElementos do vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("Posicao %d: %d\n", i, *(p + i));
    }

    return 0;
}