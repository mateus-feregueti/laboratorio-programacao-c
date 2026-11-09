
#include <stdio.h>

typedef struct {
    char nome[50];
    int registro;
    float salario;
} Funcionario;

int main(void) {

    Funcionario funcionarios[100];
    int quantidade;
    int i;
    int maiorSalario = 0;
    int menorSalario = 0;
    float diferenca;

    printf("Quantos funcionarios deseja cadastrar? ");
    scanf("%d", &quantidade);

    // CADASTRO DOS FUNCIONARIOS
    for (i = 0; i < quantidade; i++) {

        printf("\n==== FUNCIONARIO %d ====\n", i + 1);

        printf("Nome: ");
        scanf(" %49[^\n]", funcionarios[i].nome);

        printf("Registro: ");
        scanf("%d", &funcionarios[i].registro);

        printf("Salario: ");
        scanf("%f", &funcionarios[i].salario);

    }

    // EXIBICAO DOS FUNCIONARIOS
    printf("\n===== LISTA DE FUNCIONARIOS =====\n");

    for (i = 0; i < quantidade; i++) {

        printf("\n==== FUNCIONARIO %d ====\n", i + 1);

        printf("Nome: %s\n", funcionarios[i].nome);
        printf("Registro: %d\n", funcionarios[i].registro);
        printf("Salario: %.2f\n", funcionarios[i].salario);

    }

    // IDENTIFICAR MAIOR E MENOR SALARIO
    for (i = 1; i < quantidade; i++) {

        if (funcionarios[i].salario > funcionarios[maiorSalario].salario) {
            maiorSalario = i;
        }

        if (funcionarios[i].salario < funcionarios[menorSalario].salario) {
            menorSalario = i;
        }

    }

    // COMPARACAO
    diferenca = funcionarios[maiorSalario].salario -
                funcionarios[menorSalario].salario;

    printf("\n===== COMPARACAO SALARIAL =====\n");

    printf("Maior salario: %s\n", funcionarios[maiorSalario].nome);
    printf("Valor: R$ %.2f\n", funcionarios[maiorSalario].salario);

    printf("\nMenor salario: %s\n", funcionarios[menorSalario].nome);
    printf("Valor: R$ %.2f\n", funcionarios[menorSalario].salario);

    printf("\nDiferenca salarial: R$ %.2f\n", diferenca);

    return 0;
}
