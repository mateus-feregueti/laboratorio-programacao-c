
#include <stdio.h>

int main(void) {
    float notas[3][2] = {
        {7.0, 8.0},
        {6.0, 9.0},
        {10.0, 7.0}
    };

    for (int i = 0; i < 3; i++) {
        float soma = 0;

        for (int j = 0; j < 2; j++) {
            soma += notas[i][j];
        }

        float media = soma / 2;

        printf("Aluno %d: media %.2f\n", i + 1, media);
    }

    return 0;
}
