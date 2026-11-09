#include <stdio.h>

void exibirMenu(void) {
    printf("\n===== CALCULADORA =====\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Sair\n");
    printf("Escolha uma opcao: ");
}

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}

int main(void) {
    int opcao;
    float n1, n2;

    do {
        exibirMenu();
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &n1);

            printf("Digite o segundo numero: ");
            scanf("%f", &n2);
        }

        switch (opcao) {
            case 1:
                printf("Resultado: %.2f\n", somar(n1, n2));
                break;

            case 2:
                printf("Resultado: %.2f\n", subtrair(n1, n2));
                break;

            case 3:
                printf("Resultado: %.2f\n", multiplicar(n1, n2));
                break;

            case 4:
                if (n2 != 0) {
                    printf("Resultado: %.2f\n", dividir(n1, n2));
                } else {
                    printf("Erro: divisao por zero!\n");
                }
                break;

            case 5:
                printf("Encerrando calculadora...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 5);

    return 0;
}