#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char codigo[10];
    char copia[50];
    char mensagem[100] = "Ola, ";

    printf("Digite o primeiro nome do estudante: ");
    scanf("%49s", nome);

    printf("Digite o codigo do curso (CC ou SI): ");
    scanf("%9s", codigo);

    printf("\nNome do estudante: %s\n", nome);
    printf("Quantidade de caracteres: %zu\n", strlen(nome));

    strcpy(copia, nome);
    printf("Nome copiado: %s\n", copia);

    if (strcmp(codigo, "CC") == 0) {
        printf("Curso: Ciencia da Computacao\n");
    } else if (strcmp(codigo, "SI") == 0) {
        printf("Curso: Sistemas de Informacao\n");
    } else {
        printf("Codigo de curso invalido\n");
    }

    strcat(mensagem, nome);
    strcat(mensagem, "!");

    printf("%s\n", mensagem);

    return 0;
}