 

 // DESAFIO NIVEL NOVATO

#include <stdio.h> // Incluo a biblioteca padrão para poder usar funções como 'printf' e 'scanf'.

int main() { // Onde meu programa começa.

    // --- Declaração de variáveis ---
    // Crio variáveis do tipo 'char' para guardar a letra do estado.
    char estado1, estado2;
    // Crio 'arrays' de caracteres (strings) para o código das cartas e o nome das cidades.
    // O tamanho [4] é para 3 caracteres + 1 para o finalizador '\0'.
    char codigocarta1[4], codigocarta2[4]; 
    char cidade1[50], cidade2[50]; // O tamanho [50] é para a cidade.
    // Crio variáveis do tipo 'int' para números inteiros, como a população.
    int populacao1, populacao2;
    // Crio variáveis do tipo 'float' para números com casas decimais, como a área e o PIB.
    float area_km1, area_km2;
    float pib1, pib2;
    int pontos_turismo1, pontos_turismo2; // E para o número de pontos turísticos.

    // --- Coleta de dados da primeira carta ---
    printf("Insira os dados da primeira carta:\n"); // Mostro uma mensagem para o usuário.
    printf("Estado (A): \n"); // Peço o estado.
    scanf(" %c", &estado1); // Leio o caractere e guardo na variável 'estado1'. O espaço antes do '%c' ajuda a ignorar espaços em branco e quebras de linha.
    printf("Código da carta 1: \n"); // Peço o código.
    scanf(" %s", codigocarta1); // Leio a string e guardo na variável 'codigocarta1'.
    printf(" Nome da Cidade: \n"); // Peço a cidade.
    scanf(" %s", cidade1); // Leio a string da cidade.
    printf("População: \n"); // Peço a população.
    scanf(" %d", &populacao1); // Leio o número inteiro.
    printf("Área (km²): \n"); // Peço a área.
    scanf(" %f", &area_km1); // Leio o número decimal.
    printf("PIB: \n"); // Peço o PIB.
    scanf(" %f", &pib1); // Leio o número decimal.
    printf("Número de pontos de turismo: \n"); // Peço o número de pontos turísticos.
    scanf(" %d", &pontos_turismo1); // Leio o número inteiro.

    // --- Coleta de dados da segunda carta ---
    printf("\n Insira os dados da segunda carta:\n"); // Pulo uma linha e mostro a mensagem para a segunda carta.
    printf("Estado (H): \n");
    scanf(" %c", &estado2); // Leio o estado.
    printf("Código da carta 2: \n");
    scanf(" %s", codigocarta2); // Leio o código.
    printf(" Nome da Cidade: \n");
    scanf(" %s", cidade2); // Leio a cidade.
    printf("População: \n");
    scanf(" %d", &populacao2); // Leio a população.
    printf("Área (km²): \n");
    scanf(" %f", &area_km2); // Leio a área.
    printf("PIB: \n");
    scanf(" %f", &pib2); // Leio o PIB.
    printf("Número de pontos de turismo: \n");
    scanf(" %d", &pontos_turismo2); // Leio o número de pontos turísticos.

    // --- Exibição dos dados da primeira carta ---
    printf("\nInformações da primeira carta:\n"); // Mostro o título.
    printf("Estado: %c\n", estado1); // Exibo o estado, usando '%c' como marcador de lugar para um caractere.
    printf("Código da carta: %s\n", codigocarta1); // Exibo o código, usando '%s' para uma string.
    printf("Nome da Cidade: %s\n", cidade1); // Exibo a cidade.
    printf("População: %d\n", populacao1); // Exibo a população, usando '%d' para um inteiro.
    printf("Área (km²): %.2f\n", area_km1); // Exibo a área com '%.2f' para mostrar 2 casas decimais.
    printf("PIB: %.2f\n", pib1); // Exibo o PIB com 2 casas decimais.
    printf("Número de pontos de turismo: %d\n", pontos_turismo1); // Exibo os pontos turísticos.

    // --- Exibição dos dados da segunda carta ---
    printf("\nInformações da segunda carta:\n"); // Mostro o título da segunda carta.
    printf("Estado: %c\n", estado2); // Exibo o estado.
    printf("Código da carta: %s\n", codigocarta2); // Exibo o código.
    printf("Nome da Cidade: %s\n", cidade2); // Exibo a cidade.
    printf("População: %d\n", populacao2); // Exibo a população.
    printf("Área (km²): %.2f\n", area_km2); // Exibo a área.
    printf("PIB: %.2f\n", pib2); // Exibo o PIB.
    printf("Número de pontos de turismo: %d\n", pontos_turismo2); // Exibo os pontos turísticos.
    
    return 0; // Termino a função 'main' e retorno 0, indicando que o programa rodou sem problemas.
}

// DASAFIO AVENTUREIRO 

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



  // DESAFIO MESTRE


        #include <stdio.h>

        // Estrutura para armazenar os dados de cada carta
        typedef struct {
            char estado[50];
            char codigo[5];
            char nomeCidade[50];
            unsigned long int populacao; // usando unsigned long int pq população pode ser bem grande
            float area;
            float pib;
            int pontosTuristicos;
            float densidadePopulacional;
            float pibPerCapita;
            float superPoder;
        } Carta;

        // Função para calcular densidade, pib per capita e super poder
        void calcularAtributos(Carta *c) {
            // densidade populacional = população / área
            c->densidadePopulacional = (float)c->populacao / c->area;
            // pib per capita = pib / população
            c->pibPerCapita = c->pib / (float)c->populacao;
            // super poder = soma de todos os atributos numéricos + inverso da densidade
            c->superPoder =
                (float)c->populacao +
                c->area +
                c->pib +
                (float)c->pontosTuristicos +
                c->pibPerCapita +
                (1.0f / c->densidadePopulacional); // inverso pq menos denso = mais forte
        }

        int main() {
            Carta c1, c2;

            // Lendo dados da Carta 1
            printf("=== Carta 1 ===\n");
            printf("Estado: ");
            scanf(" %[^\n]", c1.estado);
            printf("Codigo: ");
            scanf(" %[^\n]", c1.codigo);
            printf("Nome da Cidade: ");
            scanf(" %[^\n]", c1.nomeCidade);
            printf("Populacao: ");
            scanf("%lu", &c1.populacao);
            printf("Area (km2): ");
            scanf("%f", &c1.area);
            printf("PIB (em bilhoes): ");
            scanf("%f", &c1.pib);
            printf("Pontos Turisticos: ");
            scanf("%d", &c1.pontosTuristicos);

            // Lendo dados da Carta 2
            printf("\n=== Carta 2 ===\n");
            printf("Estado: ");
            scanf(" %[^\n]", c2.estado);
            printf("Codigo: ");
            scanf(" %[^\n]", c2.codigo);
            printf("Nome da Cidade: ");
            scanf(" %[^\n]", c2.nomeCidade);
            printf("Populacao: ");
            scanf("%lu", &c2.populacao);
            printf("Area (km2): ");
            scanf("%f", &c2.area);
            printf("PIB (em bilhoes): ");
            scanf("%f", &c2.pib);
            printf("Pontos Turisticos: ");
            scanf("%d", &c2.pontosTuristicos);

            // Calculando atributos extras das duas cartas
            calcularAtributos(&c1);
            calcularAtributos(&c2);

            // Comparando os atributos e mostrando quem venceu
            printf("\nComparacao de Cartas:\n");
            printf("Populacao: Carta 1 venceu (%d)\n", c1.populacao > c2.populacao);
            printf("Area: Carta 1 venceu (%d)\n", c1.area > c2.area);
            printf("PIB: Carta 1 venceu (%d)\n", c1.pib > c2.pib);
            printf("Pontos Turisticos: Carta 1 venceu (%d)\n", c1.pontosTuristicos > c2.pontosTuristicos);
            printf("Densidade Populacional: Carta 1 venceu (%d)\n", c1.densidadePopulacional < c2.densidadePopulacional); // aqui menor vence
            printf("PIB per Capita: Carta 1 venceu (%d)\n", c1.pibPerCapita > c2.pibPerCapita);
            printf("Super Poder: Carta 1 venceu (%d)\n", c1.superPoder > c2.superPoder);

            return 0;
        }
