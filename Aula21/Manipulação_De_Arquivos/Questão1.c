#include <stdio.h>

int main() {
    FILE *arquivo;
    char nome[50];
    int matricula;

    arquivo = fopen("funcionarios.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("\n=== FUNCIONARIO %d ===\n", i + 1);

        printf("Nome: ");
        scanf(" %49[^\n]", nome);

        printf("Matricula: ");
        scanf("%d", &matricula);

        fprintf(arquivo, "%s %d\n", nome, matricula);
    }

    fclose(arquivo);

    printf("\nDados gravados com sucesso!\n");

    return 0;
}