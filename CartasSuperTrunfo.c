#include <stdio.h>


// Definição da estrutura para armazenar as informações da cidade
 struct cidade {
    char estado;
    char codigo[4];
    char nome[50];
    long int populacao;
    float area;
    float pib;
    int pontosturisticos;
    float densidadepopulacional;
    float pibpercapita;
 };

      int main()  {

        // Declaração das variáveis para as cartas
        struct cidade carta1;
        struct cidade carta2;
        
        // Carta 1: São Paulo
        carta1.estado ='A';
        sprintf(carta1.codigo, "A01");
        sprintf(carta1.nome, "São Paulo");
        carta1.populacao = 12325000;
        carta1.area = 1250.5;
        carta1.pib = 699.33;   // PIB em bilhões
        carta1.pontosturisticos = 50;

        // Calculo da densidade populacional para a carta 1
        carta1.densidadepopulacional = (float)carta1.populacao / carta1.area;

        // calculo do pib per capita para a carta 1
        carta1.pibpercapita = (carta1.pib * 1000000) / carta1.populacao;

        // Carta 2: Rio De Janeiro
        carta2.estado = 'B';
        sprintf(carta2.codigo, "B02");
        sprintf(carta2.nome, "Rio De Janeiro");
        carta2.populacao = 6748000;
        carta2.area = 1182.3;
        carta2.pib = 383.77; // PIB em bilhões
        carta2.pontosturisticos = 30;

        // Calculo da densidade populacional para a carta 2
        carta2.densidadepopulacional = (float)carta2.populacao / carta2.area;

        // calculo do pib per capita para a carta 2
        carta2.pibpercapita = (carta2.pib * 1000000) / carta2.populacao;

        // Exibição dos resultados

        printf("Exemplo de Saida:\n");

        printf("Carta 1:\n");
        printf("Estado: %c\n", carta1.estado);
        printf("Codigo: %s\n", carta1.codigo);
        printf("Nome: %s\n", carta1.nome);
        printf("População: %ld\n", carta1.populacao);
        printf("Area: %.2f\n", carta1.area);
        printf("PIB: %.2f bilhões\n", carta1.pib);
        printf("Pontos Turisticos: %d\n", carta1.pontosturisticos);
        printf("Densidade Populacional: %.2f\n", carta1.densidadepopulacional);
        printf("PIB per Capita: %.2f\n", carta1.pibpercapita);

        printf("\nCarta 2:\n");
        printf("Estado: %c\n", carta2.estado);
        printf("Codigo: %s\n", carta2.codigo);
        printf("Nome: %s\n", carta2.nome);
        printf("População: %ld\n", carta2.populacao);
        printf("Area: %.2f\n", carta2.area);
        printf("PIB: %.2f bilhões\n", carta2.pib);
        printf("Pontos Turisticos: %d\n", carta2.pontosturisticos);
        printf("Densidade Populacional: %.2f\n", carta2.densidadepopulacional);
        printf("PIB per Capita: %.2f\n", carta2.pibpercapita);

        return 0;

      }

