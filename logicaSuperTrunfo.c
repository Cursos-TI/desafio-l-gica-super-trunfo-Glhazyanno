#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char estadocarta1, estadocarta2;
    char codigocarta1[4], codigocarta2[4];
    char nomecidadecarta1[50], nomecidadecarta2[50];
    int populacaocarta1, populacaocarta2; 
    float areacidadecarta1, areacidadecarta2;
    float pibcarta1, pibcarta2;
    int pontosturcarta1, pontosturcarta2;
    float densidadepocarta1, densidadepocarta2;
    float pibpercapitacarta1, pibpercapitacarta2;
    float superpodercarta1, superpodercarta2;

    // --- Leitura dos dados da Carta 1 ---
    printf("Digite abaixo os dados da carta 1.\n");
    printf("Digite a primeira letra do estado da carta 1:\n");
    scanf(" %c", &estadocarta1);

    printf("Digite o codigo da carta 1 (ex: A01 a A04):\n");
    scanf("%s", codigocarta1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nomecidadecarta1);

    printf("Digite a populacao:\n");
    scanf("%d", &populacaocarta1);

    printf("Digite a area em km² da cidade:\n");
    scanf("%f", &areacidadecarta1);

    printf("Digite o Produto Interno Bruto da cidade:\n");
    scanf("%f", &pibcarta1);

    printf("Digite a quantidade de pontos turisticos na cidade:\n");
    scanf("%d", &pontosturcarta1);

    // --- Leitura dos dados da Carta 2 ---
    printf("\n--- Carta 2 ---\n");
    printf("Digite a primeira letra do estado da carta 2:\n");
    scanf(" %c", &estadocarta2);

    printf("Digite o codigo da carta 2 (ex: B01 a B04):\n");
    scanf("%s", codigocarta2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nomecidadecarta2);

    printf("Digite a populacao:\n");
    scanf("%d", &populacaocarta2);

    printf("Digite a area em km² da cidade:\n");
    scanf("%f", &areacidadecarta2);

    printf("Digite o Produto Interno Bruto da cidade:\n");
    scanf("%f", &pibcarta2);

    printf("Digite a quantidade de pontos turisticos na cidade:\n");
    scanf("%d", &pontosturcarta2);

    // --- Calculo da densidade da Carta 1 e Carta 2 ---
    densidadepocarta1 = (float)populacaocarta1 / areacidadecarta1;
    densidadepocarta2 = (float)populacaocarta2 / areacidadecarta2;

    // --- Calculo PIB per capita da Carta 1 e Carta 2 ---
    pibpercapitacarta1 = (float)pibcarta1 / populacaocarta1;
    pibpercapitacarta2 = (float)pibcarta2 / populacaocarta2;

    // --- Calculo do Super Poder ---
    superpodercarta1 = (float)populacaocarta1 + areacidadecarta1 + pibcarta1 + pontosturcarta1 + pibpercapitacarta1 + (1.0f / densidadepocarta1);
    superpodercarta2 = (float)populacaocarta2 + areacidadecarta2 + pibcarta2 + pontosturcarta2 + pibpercapitacarta2 + (1.0f / densidadepocarta2);

    // --- Impressão dos dados da Carta 1 ---
    printf("\n\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estadocarta1);
    printf("Codigo: %s\n", codigocarta1);
    printf("Cidade: %s\n", nomecidadecarta1);
    printf("Populacao: %d\n", populacaocarta1);
    printf("Area: %.2f km²\n", areacidadecarta1);
    printf("PIB: %.2f\n", pibcarta1);
    printf("Pontos Turisticos: %d\n", pontosturcarta1);
    printf("Densidade populacional: %.2f\n", densidadepocarta1);
    printf("PIB per capita: %.2f\n", pibpercapitacarta1);
    printf("Superpoder: %.2f\n", superpodercarta1); 

    // --- Impressão dos dados da Carta 2 ---
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estadocarta2);
    printf("Codigo: %s\n", codigocarta2);
    printf("Cidade: %s\n", nomecidadecarta2);
    printf("Populacao: %d\n", populacaocarta2);
    printf("Area: %.2f km²\n", areacidadecarta2);
    printf("PIB: %.2f\n", pibcarta2);
    printf("Pontos Turisticos: %d\n", pontosturcarta2);
    printf("Densidade populacional: %.2f\n", densidadepocarta2);
    printf("PIB per capita: %.2f\n", pibpercapitacarta2);
    printf("Superpoder: %.2f\n\n\n", superpodercarta2); 

    
    
    // --- Comparação das cartas (if-else) ---
    printf("\n--- Comparacao de Cartas ---\n"); 
    printf("População Carta 1 %s (%c) : %d \n", nomecidadecarta1,estadocarta1, populacaocarta1);
    printf("População Carta 2 %s (%c) : %d \n", nomecidadecarta2,estadocarta2, populacaocarta2);
    
 
    if (populacaocarta1 > populacaocarta2){
        printf("População carta 1 venceu\n");
    } else if (populacaocarta2 > populacaocarta1) {
        printf("\nA Populacao da Carta 2 e maior. Carta 2 venceu!\n");
    } else {
        printf("\nEmpate na Populacao.\n");
    }

    return 0;
}
