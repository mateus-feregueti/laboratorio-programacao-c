
#include <stdio.h>

int main(void) {
    int matriz[3][3] = {
        {12, 5, 8},
        {4, 25, 10},
        {1, 6, 9}
    };

    int maior = matriz[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    printf("Maior valor: %d\n", maior);

    return 0;
}
