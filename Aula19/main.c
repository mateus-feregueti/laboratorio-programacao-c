#include <stdio.h>

int pontuacao(int idade, int pressao, int fumante, int diabetes, int doencaCard, int ldl, float peso, float altura, int sedentario, int ultraproc, int estresse, int sonoInadq, int sexoMasculino) {
    int pontos = 0;
    float imc = peso / (altura * altura);
 
    if (idade >= 65) pontos += 3;
    if (pressao >= 160) pontos += 3;
    if (fumante == 1) pontos += 3;
    
    if (diabetes == 1) pontos += 2;
    if (doencaCard == 1) pontos += 2;
    if (ldl >= 160) pontos += 2;
    if (imc >= 30) pontos += 2;
    
    if (sedentario == 1) pontos += 1;
    if (ultraproc == 1) pontos += 1;
    if (estresse == 1) pontos += 1;
    if (sonoInadq == 1) pontos += 1;
    if (sexoMasculino == 1) pontos += 1;
    return pontos;
}

void clasificacao(int pontos) { 
    if (pontos <= 4) printf("Menor de 10%%\n");
    else if (pontos <= 9) printf("Entre 10%% e 20%%\n");
    else if (pontos <= 14) printf("Entre 20%% e 30%%\n");
    else if (pontos <= 18) printf("Entre 30%% e 50%%\n");
    else printf("Acima de 50%%\n");
}

int main(void) {
    char nomes[5][50];
    float dados[5][13];
    int qtd;
    float temp; 

    printf("Sistema de Análise de Risco Cardiovascular\n");
    printf("Insira a quantidade de pacientes (1 a 5): ");
    scanf("%d", &qtd);

    for (int i = 0; i < qtd; i++) {
        printf("\nPACIENTE %d\n", i + 1);
        printf("Insira seu nome: ");
        scanf(" %49[^\n]", nomes[i]);

        printf("Insira sua idade: "); scanf("%f", &temp); dados[i][0] = temp;
        printf("Insira sua pressao sistolica (mmHg): "); scanf("%f", &temp); dados[i][1] = temp;
        printf("Você é fumante? (1-Sim / 0-Nao): "); scanf("%f", &temp); dados[i][2] = temp;
        printf("Você possui diabetes? (1-Sim / 0-Nao): "); scanf("%f", &temp); dados[i][3] = temp;
        printf("Possui histórico de doença cardíaca? (1-Sim / 0-Nao): "); scanf("%f", &temp); dados[i][4] = temp;
        printf("Insira seu colesterol LDL (mg/dL): "); scanf("%f", &temp); dados[i][5] = temp;
        printf("Insira seu peso (kg): "); scanf("%f", &temp); dados[i][6] = temp;
        printf("Insira sua altura (m): "); scanf("%f", &temp); dados[i][7] = temp;
        printf("Você é sedentario (1-Sim / 0-Nao): "); scanf("%f", &temp); dados[i][8] = temp;
        printf("Sua alimentacao é rica em ultraprocessados? (1-Sim / 0-Nao): "); scanf("%f", &temp); dados[i][9] = temp;
        printf("Possui estresse cronico (1-Sim / 0-Nao): "); scanf("%f", &temp); dados[i][10] = temp;
        printf("Possui sono inadequado (1-Sim / 0-Nao): "); scanf("%f", &temp); dados[i][11] = temp;
        printf("Seu sexo biologico é masculino? (1-Sim / 0-Nao): "); scanf("%f", &temp); dados[i][12] = temp;
    }

    printf("\n Relatório: \n");
    for (int i = 0; i < qtd; i++) {
        int pontos = pontuacao(
            (int)dados[i][0], (int)dados[i][1], (int)dados[i][2],
            (int)dados[i][3], (int)dados[i][4], (int)dados[i][5],
            dados[i][6], dados[i][7], (int)dados[i][8],
            (int)dados[i][9], (int)dados[i][10],
            (int)dados[i][11], (int)dados[i][12]
        );
        printf("\nPaciente: %s\n", nomes[i]);
        printf("Classificacao: ");
        clasificacao(pontos); 
    }
    return 0;
}
