#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    // --- Definição das variáveis para a Carta 1 ---
    char estado_carta1;
    char codigo_carta1[5];
    char nome_cidade_carta1[50];
    int populacao_carta1;
    float area_carta1;
    float pib_carta1; // PIB em bilhões de reais
    int pontos_turisticos_carta1;
    float densidade_populacional_carta1; // Nova variável para densidade populacional
    float pib_per_capita_carta1;         // Nova variável para PIB per capita

    // --- Definição das variáveis para a Carta 2 ---
    char estado_carta2;
    char codigo_carta2[5];
    char nome_cidade_carta2[50];
    int populacao_carta2;
    float area_carta2;
    float pib_carta2; // PIB em bilhões de reais
    int pontos_turisticos_carta2;
    float densidade_populacional_carta2; // Nova variável para densidade populacional
    float pib_per_capita_carta2;         // Nova variável para PIB per capita

    // --- Entrada de dados para a Carta 1 ---
    printf("--- Insira os dados da Carta 1 ---\n");
    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado_carta1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo_carta1);

    printf("Nome da Cidade: ");
    while (getchar() != '\n'); // Limpa o buffer
    fgets(nome_cidade_carta1, sizeof(nome_cidade_carta1), stdin);

    printf("Populacao: ");
    scanf("%d", &populacao_carta1);

    printf("Area (em km^2): ");
    scanf("%f", &area_carta1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib_carta1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos_carta1);

    // --- Calculando Densidade Populacional e PIB per Capita para a Carta 1 ---
    // A população deve ser convertida para float para o cálculo de divisão
    densidade_populacional_carta1 = (float)populacao_carta1 / area_carta1;
    // O PIB foi inserido em bilhões de reais, então multiplicamos por 1.000.000.000 para ter o valor total
    pib_per_capita_carta1 = (pib_carta1 * 1000000000.0) / populacao_carta1;

    // --- Entrada de dados para a Carta 2 ---
    printf("\n--- Insira os dados da Carta 2 ---\n");
    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado_carta2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo_carta2);

    printf("Nome da Cidade: ");
    while (getchar() != '\n'); // Limpa o buffer
    fgets(nome_cidade_carta2, sizeof(nome_cidade_carta2), stdin);

    printf("Populacao: ");
    scanf("%d", &populacao_carta2);

    printf("Area (em km^2): ");
    scanf("%f", &area_carta2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib_carta2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos_carta2);

    // --- Calculando Densidade Populacional e PIB per Capita para a Carta 2 ---
    densidade_populacional_carta2 = (float)populacao_carta2 / area_carta2;
    pib_per_capita_carta2 = (pib_carta2 * 1000000000.0) / populacao_carta2;

    // --- Exibição dos dados da Carta 1 ---
    printf("\n--- Informacoes da Carta 1 ---\n");
    printf("Estado: %c\n", estado_carta1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s", nome_cidade_carta1);
    printf("Populacao: %d\n", populacao_carta1);
    printf("Area: %.2f km\u00b2\n", area_carta1);
    printf("PIB: %.2f bilhoes de reais\n", pib_carta1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_carta1);
    printf("Densidade Populacional: %.2f hab/km\u00b2\n", densidade_populacional_carta1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_carta1);

    // --- Exibição dos dados da Carta 2 ---
    printf("\n--- Informacoes da Carta 2 ---\n");
    printf("Estado: %c\n", estado_carta2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s", nome_cidade_carta2);
    printf("Populacao: %d\n", populacao_carta2);
    printf("Area: %.2f km\u00b2\n", area_carta2);
    printf("PIB: %.2f bilhoes de reais\n", pib_carta2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_carta2);
    printf("Densidade Populacional: %.2f hab/km\u00b2\n", densidade_populacional_carta2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_carta2);

    return 0; // Indica que o programa foi executado com sucesso
}
