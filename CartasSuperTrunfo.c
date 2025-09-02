#include <stdio.h>

int main() {
    int pontosa, pontosb;
    char iniciala[30], inicialb[30], nomea[30], nomeb[30];
    char estadoa, estadob;
    float populacaoa, populacaob, piba, pibb, areaa, areab;

    printf("DIGITE OS DADOS DA PRIMEIRA CARTA:\n");
    printf("digite a primeira letra do estado: ");
    scanf(" %c", &estadoa); 
    printf("digite o codigo da carta, inicial mais numero: ");
    scanf("%s", iniciala);
    printf("informe o nome da cidade: ");
    scanf("%s", nomea);
    printf("informe a populacao: ");
    scanf("%f", &populacaoa);
    printf("informe a area total: ");
    scanf("%f", &areaa); 
    printf("digite o pib: ");
    scanf("%f", &piba);
    printf("informe o numero de pontos turisticos: ");
    scanf("%d", &pontosa);

    printf("-------//-------\n");

    printf("DIGITE OS DADOS DA SEGUNDA CARTA:\n");
    printf("digite a primeira letra do estado: ");
    scanf(" %c", &estadob);
    printf("digite o codigo da carta, inicial mais numero: ");
    scanf("%s", inicialb);
    printf("Informe o nome da cidade: ");
    scanf("%s", nomeb);
    printf("Informe a populacao: ");
    scanf("%f", &populacaob);
    printf("informe a area total: ");
    scanf("%f", &areab); 
    printf("digite o pib: ");
    scanf("%f", &pibb);
    printf("digite o numero de pontos turisticos: ");
    scanf("%d", &pontosb);

    printf("\n--- DADOS DA CARTA 1 ---\n");
    printf("ESTADO: %c\n", estadoa);
    printf("CODIGO: %s\n", iniciala);
    printf("NOME DA CIDADE: %s\n", nomea);
    printf("POPULACAO: %.2f\n", populacaoa); 
    printf("AREA: %.2f\n", areaa);
    printf("PIB: %.2f\n", piba);
    printf("NUMERO DE PONTOS TURISTICOS: %d\n", pontosa);

    printf("\n--- DADOS DA CARTA 2 ---\n");
    printf("ESTADO: %c\n", estadob);
    printf("CODIGO: %s\n", inicialb);
    printf("NOME DA CIDADE: %s\n", nomeb);
    printf("POPULACAO: %.2f\n", populacaob);
    printf("AREA: %.2f\n", areab);
    printf("PIB: %.2f\n", pibb);
    printf("NUMERO DE PONTOS TURISTICOS: %d\n", pontosb);

    return 0;
}