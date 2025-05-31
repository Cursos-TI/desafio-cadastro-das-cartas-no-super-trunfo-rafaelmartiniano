#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    // --- Definição das variáveis para a Carta 1 ---
    char estado_carta1;
    char codigo_carta1[5];
    char nome_cidade_carta1[50];
    unsigned long int populacao_carta1; // Alterado para unsigned long int
    float area_carta1;
    float pib_carta1; // PIB em bilhões de reais
    int pontos_turisticos_carta1;
    float densidade_populacional_carta1;
    float pib_per_capita_carta1;
    float super_poder_carta1; // Nova variável para o Super Poder

    // --- Definição das variáveis para a Carta 2 ---
    char estado_carta2;
    char codigo_carta2[5];
    char nome_cidade_carta2[50];
    unsigned long int populacao_carta2; // Alterado para unsigned long int
    float area_carta2;
    float pib_carta2; // PIB em bilhões de reais
    int pontos_turisticos_carta2;
    float densidade_populacional_carta2;
    float pib_per_capita_carta2;
    float super_poder_carta2; // Nova variável para o Super Poder

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
    scanf("%lu", &populacao_carta1); // Usar %lu para unsigned long int

    printf("Area (em km^2): ");
    scanf("%f", &area_carta1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib_carta1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos_carta1);

    // --- Calculando Densidade Populacional e PIB per Capita para a Carta 1 ---
    densidade_populacional_carta1 = (float)populacao_carta1 / area_carta1;
    pib_per_capita_carta1 = (pib_carta1 * 1000000000.0F) / populacao_carta1; // Usar 1000000000.0F para float literal

    // --- Calculando Super Poder para a Carta 1 ---
    // Inverso da densidade populacional (para quanto menor densidade, maior poder)
    float inverso_densidade_carta1 = 1.0F / densidade_populacional_carta1;
    super_poder_carta1 = (float)populacao_carta1 + area_carta1 + (pib_carta1 * 1000000000.0F) +
                         (float)pontos_turisticos_carta1 + pib_per_capita_carta1 + inverso_densidade_carta1;

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
    scanf("%lu", &populacao_carta2); // Usar %lu para unsigned long int

    printf("Area (em km^2): ");
    scanf("%f", &area_carta2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib_carta2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos_carta2);

    // --- Calculando Densidade Populacional e PIB per Capita para a Carta 2 ---
    densidade_populacional_carta2 = (float)populacao_carta2 / area_carta2;
    pib_per_capita_carta2 = (pib_carta2 * 1000000000.0F) / populacao_carta2;

    // --- Calculando Super Poder para a Carta 2 ---
    float inverso_densidade_carta2 = 1.0F / densidade_populacional_carta2;
    super_poder_carta2 = (float)populacao_carta2 + area_carta2 + (pib_carta2 * 1000000000.0F) +
                         (float)pontos_turisticos_carta2 + pib_per_capita_carta2 + inverso_densidade_carta2;

    // --- Exibição dos dados da Carta 1 ---
    printf("\n--- Informacoes da Carta 1 ---\n");
    printf("Estado: %c\n", estado_carta1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s", nome_cidade_carta1);
    printf("Populacao: %lu\n", populacao_carta1); // Usar %lu
    printf("Area: %.2f km\u00b2\n", area_carta1);
    printf("PIB: %.2f bilhoes de reais\n", pib_carta1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_carta1);
    printf("Densidade Populacional: %.2f hab/km\u00b2\n", densidade_populacional_carta1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_carta1);
    printf("Super Poder: %.2f\n", super_poder_carta1); // Exibindo Super Poder

    // --- Exibição dos dados da Carta 2 ---
    printf("\n--- Informacoes da Carta 2 ---\n");
    printf("Estado: %c\n", estado_carta2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s", nome_cidade_carta2);
    printf("Populacao: %lu\n", populacao_carta2); // Usar %lu
    printf("Area: %.2f km\u00b2\n", area_carta2);
    printf("PIB: %.2f bilhoes de reais\n", pib_carta2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_carta2);
    printf("Densidade Populacional: %.2f hab/km\u00b2\n", densidade_populacional_carta2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_carta2);
    printf("Super Poder: %.2f\n", super_poder_carta2); // Exibindo Super Poder

    // --- Comparação de Cartas ---
    printf("\n--- Comparacao de Cartas ---\n");

    // População: Maior valor vence
    printf("Populacao: Carta %d venceu (%d)\n",
           (populacao_carta1 > populacao_carta2 ? 1 : 2), // 1 se carta 1 vence, 2 se carta 2 vence
           (populacao_carta1 > populacao_carta2 ? 1 : 0)); // 1 para verdadeiro, 0 para falso (Carta 1 vence)

    // Área: Maior valor vence
    printf("Area: Carta %d venceu (%d)\n",
           (area_carta1 > area_carta2 ? 1 : 2),
           (area_carta1 > area_carta2 ? 1 : 0));

    // PIB: Maior valor vence
    printf("PIB: Carta %d venceu (%d)\n",
           (pib_carta1 > pib_carta2 ? 1 : 2),
           (pib_carta1 > pib_carta2 ? 1 : 0));

    // Pontos Turísticos: Maior valor vence
    printf("Pontos Turisticos: Carta %d venceu (%d)\n",
           (pontos_turisticos_carta1 > pontos_turisticos_carta2 ? 1 : 2),
           (pontos_turisticos_carta1 > pontos_turisticos_carta2 ? 1 : 0));

    // Densidade Populacional: MENOR valor vence
    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           (densidade_populacional_carta1 < densidade_populacional_carta2 ? 1 : 2), // Invertido: < para menor vence
           (densidade_populacional_carta1 < densidade_populacional_carta2 ? 1 : 0)); // 1 para verdadeiro (Carta 1 vence)

    // PIB per Capita: Maior valor vence
    printf("PIB per Capita: Carta %d venceu (%d)\n",
           (pib_per_capita_carta1 > pib_per_capita_carta2 ? 1 : 2),
           (pib_per_capita_carta1 > pib_per_capita_carta2 ? 1 : 0));

    // Super Poder: Maior valor vence
    printf("Super Poder: Carta %d venceu (%d)\n",
           (super_poder_carta1 > super_poder_carta2 ? 1 : 2),
           (super_poder_carta1 > super_poder_carta2 ? 1 : 0));

    return 0; // Indica que o programa foi executado com sucesso
}
