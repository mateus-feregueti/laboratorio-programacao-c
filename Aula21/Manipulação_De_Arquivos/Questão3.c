#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main() {
    FILE *arquivo;
    Funcionario f;
    char linha[100];

    arquivo = fopen("funcionarios.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("\n=== FUNCIONARIO %d ===\n", i + 1);

        printf("Nome: ");
        scanf(" %49[^\n]", f.nome);

        printf("Salario: ");
        scanf("%f", &f.salario);

        printf("Horas extras: ");
        scanf("%d", &f.horasExtras);

        fprintf(arquivo, "%s\n%.2f\n%d\n",
                f.nome, f.salario, f.horasExtras);
    }

    fclose(arquivo);

    arquivo = fopen("funcionarios.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao ler o arquivo!\n");
        return 1;
    }

    printf("\n=== FUNCIONARIOS CADASTRADOS ===\n");

    while (fgets(f.nome, 50, arquivo) != NULL) {
        if (fscanf(arquivo, "%f\n%d\n",
                   &f.salario, &f.horasExtras) != 2) {
            break;
        }

        printf("\nNome: %s", f.nome);
        printf("Salario: R$ %.2f\n", f.salario);
        printf("Horas extras: %d\n", f.horasExtras);
    }

    fclose(arquivo);

    return 0;
}