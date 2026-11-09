#include <stdio.h>
typedef struct {
 char nome[50];
 int registro;
 float salario;
} Funcionario;

int main(void) {
 Funcionario funcionario1;
 Funcionario funcionario2;
 float diferenca;
 
 printf("\n====FUNCIONARIO 1====\n");
 printf("Nome: ");
 scanf(" %49[^\n]", funcionario1.nome);
 
 printf("Registro: ");
 scanf("%d", &funcionario1.registro);
 
 printf("Salário: ");
 scanf("%f", &funcionario1.salario);
 
 printf("\n====FUNCIONARIO 2====\n");
 printf("Nome: ");
 scanf(" %49[^\n]", funcionario2.nome);
 
 printf("Registro: ");
 scanf("%d", &funcionario2.registro);
 
 printf("Salário: ");
 scanf("%f", &funcionario2.salario);
 
 printf("\n====FUNCIONARIO 1====\n");
 printf("Nome: %s\n", funcionario1.nome);
 printf("Registro: %d\n", funcionario1.registro);
 printf("Salário: %.1f\n", funcionario1.salario);
 printf("\n====FUNCIONARIO 2====\n");
 printf("Nome: %s\n", funcionario2.nome);
 printf("Registro: %d\n", funcionario2.registro);
 printf("Salário: %.1f\n", funcionario2.salario);
 
 if (funcionario1.salario>funcionario2.salario) {
    diferenca = (funcionario1.salario-funcionario2.salario);
    printf("\nO funcionário 1 possui maior salário.");
    printf("\n Diferença: %.2f\n", diferenca); 
}
    
if (funcionario2.salario>funcionario1.salario) {
    diferenca = (funcionario2.salario-funcionario1.salario);
    printf("\nO funcionário 2 possui maior salário.");
    printf("\n Diferença: %.2f\n", diferenca);
}

if (funcionario2.salario==funcionario1.salario) {
printf("\nO salário dos dois funcionários é igual.");
}

 return 0;
}