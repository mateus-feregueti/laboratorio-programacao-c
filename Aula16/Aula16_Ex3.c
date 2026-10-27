#include <stdio.h>

int main(void) {
	char palavra[100];

	printf("Digite uma palavra: ");
	scanf("%99s", palavra);

	printf("Primeiro caractere: %c\n", palavra[0]);

	return 0;
}