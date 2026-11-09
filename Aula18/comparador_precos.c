#include <stdio.h>

float maiorPreco(float preco1, float preco2) {
    if (preco1 > preco2) {
        return preco1;
    } else {
        return preco2;
    }
}

int main(void) {
    float preco1, preco2;

    printf("Digite o preco do primeiro produto: ");
    scanf("%f", &preco1);

    printf("Digite o preco do segundo produto: ");
    scanf("%f", &preco2);

    if (preco1 == preco2) {
        printf("Os dois produtos possuem o mesmo preco.\n");
    } else {
        printf("O maior preco e: R$ %.2f\n",
               maiorPreco(preco1, preco2));
    }

    return 0;
}