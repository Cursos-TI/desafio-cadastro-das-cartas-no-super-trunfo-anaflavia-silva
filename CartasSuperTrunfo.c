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