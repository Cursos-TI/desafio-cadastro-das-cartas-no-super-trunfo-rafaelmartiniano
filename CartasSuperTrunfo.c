#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <string.h> // Inclui a biblioteca para manipulação de strings (para strcpy)

int main() {
    // --- Definição e inicialização das variáveis para a Carta 1 ---
    char estado_carta1 = 'A';
    char codigo_carta1[5] = "A01";
    char nome_cidade_carta1[50] = "Sao Paulo";
    unsigned long int populacao_carta1 = 12325000;
    float area_carta1 = 1521.11F;
    float pib_carta1 = 699.28F; // PIB em bilhões de reais
    int pontos_turisticos_carta1 = 50;
    float densidade_populacional_carta1;
    float pib_per_capita_carta1;

    // --- Definição e inicialização das variáveis para a Carta 2 ---
    char estado_carta2 = 'B';
    char codigo_carta2[5] = "B02";
    char nome_cidade_carta2[50] = "Rio de Janeiro";
    unsigned long int populacao_carta2 = 6748000;
    float area_carta2 = 1200.25F;
    float pib_carta2 = 300.50F; // PIB em bilhões de reais
    int pontos_turisticos_carta2 = 30;
    float densidade_populacional_carta2;
    float pib_per_capita_carta2;

    // --- Calculando Densidade Populacional e PIB per Capita para a Carta 1 ---
    // Certifique-se de que a divisão de população por área resulte em float
    densidade_populacional_carta1 = (float)populacao_carta1 / area_carta1;
    // O PIB foi inserido em bilhões de reais, então multiplicamos por 1.000.000.000 para ter o valor total
    pib_per_capita_carta1 = (pib_carta1 * 1000000000.0F) / populacao_carta1;

    // --- Calculando Densidade Populacional e PIB per Capita para a Carta 2 ---
    densidade_populacional_carta2 = (float)populacao_carta2 / area_carta2;
    pib_per_capita_carta2 = (pib_carta2 * 1000000000.0F) / populacao_carta2;

    // --- Exibição dos dados da Carta 1 ---
    printf("--- Informacoes da Carta 1 ---\n");
    printf("Estado: %c\n", estado_carta1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade_carta1);
    printf("Populacao: %lu\n", populacao_carta1);
    printf("Area: %.2f km\u00b2\n", area_carta1);
    printf("PIB: %.2f bilhoes de reais\n", pib_carta1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_carta1);
    printf("Densidade Populacional: %.2f hab/km\u00b2\n", densidade_populacional_carta1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_carta1);

    // --- Exibição dos dados da Carta 2 ---
    printf("\n--- Informacoes da Carta 2 ---\n");
    printf("Estado: %c\n", estado_carta2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade_carta2);
    printf("Populacao: %lu\n", populacao_carta2);
    printf("Area: %.2f km\u00b2\n", area_carta2);
    printf("PIB: %.2f bilhoes de reais\n", pib_carta2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_carta2);
    printf("Densidade Populacional: %.2f hab/km\u00b2\n", densidade_populacional_carta2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_carta2);

    // --- Comparação de Cartas (Atributo: População) ---
    // Escolhemos o atributo População para a comparação
    printf("\n--- Comparacao de Cartas (Atributo: Populacao) ---\n");

    printf("Carta 1 - %s (%c): %lu\n", nome_cidade_carta1, estado_carta1, populacao_carta1);
    printf("Carta 2 - %s (%c): %lu\n", nome_cidade_carta2, estado_carta2, populacao_carta2);

    // Lógica de comparação para População: maior valor vence
    if (populacao_carta1 > populacao_carta2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade_carta1);
    } else if (populacao_carta2 > populacao_carta1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade_carta2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0; // Indica que o programa foi executado com sucesso
}
