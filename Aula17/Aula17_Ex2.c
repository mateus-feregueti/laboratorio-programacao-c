#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char perfil[20];
    char confirmacao[50];
    char mensagem[100] = "Bem-vindo, ";

    printf("Digite seu primeiro nome: ");
    scanf("%49s", nome);

    printf("Digite o perfil (ADMIN ou COMUM): ");
    scanf("%19s", perfil);

    printf("\nNome: %s\n", nome);
    printf("Quantidade de caracteres: %zu\n", strlen(nome));

    strcpy(confirmacao, nome);
    printf("Nome confirmado: %s\n", confirmacao);

    if (strcmp(perfil, "ADMIN") == 0) {
        printf("Perfil de acesso: Administrador\n");
    } else if (strcmp(perfil, "COMUM") == 0) {
        printf("Perfil de acesso: Comum\n");
    } else {
        printf("Perfil de acesso invalido\n");
    }

    strcat(mensagem, nome);
    printf("%s!\n", mensagem);

    return 0;
}