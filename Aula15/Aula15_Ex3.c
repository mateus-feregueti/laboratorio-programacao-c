
#include <stdio.h>

int main(void) {
    int matriz[3][3] = {
        {2, 5, 8},
        {4, 7, 10},
        {1, 6, 9}
    };

    int pares = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] % 2 == 0) {
                pares++;
            }
        }
    }

    printf("Quantidade de pares: %d\n", pares);

    return 0;
}
