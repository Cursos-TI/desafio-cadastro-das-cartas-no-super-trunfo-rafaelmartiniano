#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída
#include <string.h> // Inclui a biblioteca para manipulação de strings (para strcpy)

int main() {
    // --- Dados pré-definidos para a Carta 1 (País) ---
    // Mantemos os nomes das variáveis para consistência, mas representam "Países"
    char estado_carta1 = 'A'; // Estado ou região (Ex: A de América do Norte)
    char codigo_carta1[5] = "A01";
    char nome_pais_carta1[50] = "Estados Unidos"; // Renomeado de cidade para país
    unsigned long int populacao_carta1 = 331000000; // População em 2021
    float area_carta1 = 9834000.0F; // Área em km²
    float pib_carta1 = 25.46F; // PIB em trilhões de dólares (25.46 * 10^12)
    int pontos_turisticos_carta1 = 100; // Exemplo
    float densidade_populacional_carta1;
    float pib_per_capita_carta1;

    // --- Dados pré-definidos para a Carta 2 (País) ---
    char estado_carta2 = 'B'; // Ex: B de América do Sul
    char codigo_carta2[5] = "B02";
    char nome_pais_carta2[50] = "Brasil"; // Renomeado de cidade para país
    unsigned long int populacao_carta2 = 215000000; // População em 2021
    float area_carta2 = 8516000.0F; // Área em km²
    float pib_carta2 = 1.92F; // PIB em trilhões de dólares (1.92 * 10^12)
    int pontos_turisticos_carta2 = 70; // Exemplo
    float densidade_populacional_carta2;
    float pib_per_capita_carta2;

    int escolha_atributo; // Variável para armazenar a escolha do usuário

    // --- Calculando Densidade Populacional e PIB per Capita para a Carta 1 ---
    // A população deve ser convertida para float para o cálculo de divisão.
    // O PIB foi inserido em trilhões (ex: 25.46 trilhões de dólares), então para PIB per capita,
    // precisamos converter para o valor total em unidades (25.46 * 10^12).
    // Usaremos 10^12 como fator de multiplicação para o PIB para os cálculos per capita.
    densidade_populacional_carta1 = (float)populacao_carta1 / area_carta1;
    pib_per_capita_carta1 = (pib_carta1 * 1000000000000.0F) / populacao_carta1;

    // --- Calculando Densidade Populacional e PIB per Capita para a Carta 2 ---
    densidade_populacional_carta2 = (float)populacao_carta2 / area_carta2;
    pib_per_capita_carta2 = (pib_carta2 * 1000000000000.0F) / populacao_carta2;

    // --- Exibição das Informações das Cartas (Opcional, mas útil para o usuário) ---
    printf("--- Cartas em Jogo ---\n");
    printf("\nCarta 1: %s\n", nome_pais_carta1);
    printf("  População: %lu\n", populacao_carta1);
    printf("  Área: %.2f km\u00b2\n", area_carta1);
    printf("  PIB: %.2f trilhões de dólares\n", pib_carta1);
    printf("  Pontos Turísticos: %d\n", pontos_turisticos_carta1);
    printf("  Densidade Demográfica: %.2f hab/km\u00b2\n", densidade_populacional_carta1);
    printf("  PIB per Capita: %.2f dólares\n", pib_per_capita_carta1);

    printf("\nCarta 2: %s\n", nome_pais_carta2);
    printf("  População: %lu\n", populacao_carta2);
    printf("  Área: %.2f km\u00b2\n", area_carta2);
    printf("  PIB: %.2f trilhões de dólares\n", pib_carta2);
    printf("  Pontos Turísticos: %d\n", pontos_turisticos_carta2);
    printf("  Densidade Demográfica: %.2f hab/km\u00b2\n", densidade_populacional_carta2);
    printf("  PIB per Capita: %.2f dólares\n", pib_per_capita_carta2);

    // --- Menu Interativo ---
    printf("\n--- Escolha o Atributo para Comparacao ---\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB per Capita\n");
    printf("Digite o numero do atributo desejado: ");
    scanf("%d", &escolha_atributo);

    printf("\n--- Resultado da Comparacao ---\n");

    // --- Lógica de Comparação usando switch e if-else aninhado ---
    switch (escolha_atributo) {
        case 1: // População
            printf("Atributo: População\n");
            printf("Carta 1 - %s: %lu\n", nome_pais_carta1, populacao_carta1);
            printf("Carta 2 - %s: %lu\n", nome_pais_carta2, populacao_carta2);
            if (populacao_carta1 > populacao_carta2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_pais_carta1);
            } else if (populacao_carta2 > populacao_carta1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_pais_carta2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("Carta 1 - %s: %.2f km\u00b2\n", nome_pais_carta1, area_carta1);
            printf("Carta 2 - %s: %.2f km\u00b2\n", nome_pais_carta2, area_carta2);
            if (area_carta1 > area_carta2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_pais_carta1);
            } else if (area_carta2 > area_carta1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_pais_carta2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("Carta 1 - %s: %.2f trilhões de dólares\n", nome_pais_carta1, pib_carta1);
            printf("Carta 2 - %s: %.2f trilhões de dólares\n", nome_pais_carta2, pib_carta2);
            if (pib_carta1 > pib_carta2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_pais_carta1);
            } else if (pib_carta2 > pib_carta1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_pais_carta2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("Carta 1 - %s: %d\n", nome_pais_carta1, pontos_turisticos_carta1);
            printf("Carta 2 - %s: %d\n", nome_pais_carta2, pontos_turisticos_carta2);
            if (pontos_turisticos_carta1 > pontos_turisticos_carta2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_pais_carta1);
            } else if (pontos_turisticos_carta2 > pontos_turisticos_carta1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_pais_carta2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica (menor valor vence)
            printf("Atributo: Densidade Demográfica\n");
            printf("Carta 1 - %s: %.2f hab/km\u00b2\n", nome_pais_carta1, densidade_populacional_carta1);
            printf("Carta 2 - %s: %.2f hab/km\u00b2\n", nome_pais_carta2, densidade_populacional_carta2);
            if (densidade_populacional_carta1 < densidade_populacional_carta2) { // Regra invertida
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_pais_carta1);
            } else if (densidade_populacional_carta2 < densidade_populacional_carta1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_pais_carta2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 6: // PIB per Capita
            printf("Atributo: PIB per Capita\n");
            printf("Carta 1 - %s: %.2f dólares\n", nome_pais_carta1, pib_per_capita_carta1);
            printf("Carta 2 - %s: %.2f dólares\n", nome_pais_carta2, pib_per_capita_carta2);
            if (pib_per_capita_carta1 > pib_per_capita_carta2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_pais_carta1);
            } else if (pib_per_capita_carta2 > pib_per_capita_carta1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_pais_carta2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default: // Tratamento para escolha inválida
            printf("Opção inválida! Por favor, escolha um número de 1 a 6.\n");
            break;
    }

    return 0; // Indica que o programa foi executado com sucesso
}
