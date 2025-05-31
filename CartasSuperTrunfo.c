#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída
#include <string.h> // Inclui a biblioteca para manipulação de strings

// Define um valor grande para indicar que uma opção de menu foi "removida"
#define REMOVED_OPTION -1

int main() {
    // --- Dados pré-definidos para a Carta 1 (País) ---
    char nome_pais_carta1[50] = "Estados Unidos";
    unsigned long int populacao_carta1 = 331000000; // População em 2021
    float area_carta1 = 9834000.0F; // Área em km²
    float pib_carta1 = 25.46F; // PIB em trilhões de dólares
    int pontos_turisticos_carta1 = 100;
    float densidade_populacional_carta1;
    float pib_per_capita_carta1;

    // --- Dados pré-definidos para a Carta 2 (País) ---
    char nome_pais_carta2[50] = "Brasil";
    unsigned long int populacao_carta2 = 215000000; // População em 2021
    float area_carta2 = 8516000.0F; // Área em km²
    float pib_carta2 = 1.92F; // PIB em trilhões de dólares
    int pontos_turisticos_carta2 = 70;
    float densidade_populacional_carta2;
    float pib_per_capita_carta2;

    int escolha_atributo1 = 0; // Variável para armazenar a escolha do 1º atributo
    int escolha_atributo2 = 0; // Variável para armazenar a escolha do 2º atributo

    // Arrays para gerenciar os atributos no menu dinâmico
    // As strings serão usadas para exibir o nome do atributo escolhido
    char *nomes_atributos[] = {
        "", // Posição 0 não usada para alinhar com as opções 1-6
        "População",
        "Área",
        "PIB",
        "Pontos Turísticos",
        "Densidade Demográfica",
        "PIB per Capita"
    };

    // Array para controlar a disponibilidade das opções de menu
    // 1 = disponível, REMOVED_OPTION = removido
    int menu_opcoes[7] = {0, 1, 1, 1, 1, 1, 1}; // 0 na pos 0, 1 para todas as outras

    float valor_atributo1_carta1, valor_atributo1_carta2;
    float valor_atributo2_carta1, valor_atributo2_carta2;
    float soma_atributos_carta1, soma_atributos_carta2;

    // --- Calculando Densidade Populacional e PIB per Capita para as Cartas ---
    densidade_populacional_carta1 = (float)populacao_carta1 / area_carta1;
    pib_per_capita_carta1 = (pib_carta1 * 1000000000000.0F) / populacao_carta1;

    densidade_populacional_carta2 = (float)populacao_carta2 / area_carta2;
    pib_per_capita_carta2 = (pib_carta2 * 1000000000000.0F) / populacao_carta2;

    // --- Exibição das Informações das Cartas ---
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

    // --- Menu Dinâmico para o Primeiro Atributo ---
    printf("\n--- Escolha o PRIMEIRO Atributo para Comparacao ---\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB per Capita\n");

    // Loop para garantir uma escolha válida para o primeiro atributo
    while (escolha_atributo1 < 1 || escolha_atributo1 > 6 || menu_opcoes[escolha_atributo1] == REMOVED_OPTION) {
        printf("Digite o numero do PRIMEIRO atributo desejado: ");
        scanf("%d", &escolha_atributo1);
        if (escolha_atributo1 < 1 || escolha_atributo1 > 6) {
            printf("Opcao invalida. Por favor, digite um numero entre 1 e 6.\n");
        }
    }

    // Marca o primeiro atributo como "removido" para o próximo menu
    menu_opcoes[escolha_atributo1] = REMOVED_OPTION;

    // --- Menu Dinâmico para o Segundo Atributo ---
    printf("\n--- Escolha o SEGUNDO Atributo para Comparacao ---\n");
    if (menu_opcoes[1] != REMOVED_OPTION) printf("1. População\n");
    if (menu_opcoes[2] != REMOVED_OPTION) printf("2. Área\n");
    if (menu_opcoes[3] != REMOVED_OPTION) printf("3. PIB\n");
    if (menu_opcoes[4] != REMOVED_OPTION) printf("4. Pontos Turísticos\n");
    if (menu_opcoes[5] != REMOVED_OPTION) printf("5. Densidade Demográfica\n");
    if (menu_opcoes[6] != REMOVED_OPTION) printf("6. PIB per Capita\n");

    // Loop para garantir uma escolha válida para o segundo atributo (não repetido)
    while (escolha_atributo2 < 1 || escolha_atributo2 > 6 || escolha_atributo2 == escolha_atributo1) {
        printf("Digite o numero do SEGUNDO atributo desejado: ");
        scanf("%d", &escolha_atributo2);
        if (escolha_atributo2 < 1 || escolha_atributo2 > 6) {
            printf("Opcao invalida. Por favor, digite um numero entre 1 e 6.\n");
        } else if (escolha_atributo2 == escolha_atributo1) {
            printf("Este atributo ja foi escolhido como o primeiro. Por favor, escolha outro.\n");
        }
    }

    // --- Atribuição dos valores dos atributos escolhidos ---
    // Atributo 1
    switch (escolha_atributo1) {
        case 1: valor_atributo1_carta1 = (float)populacao_carta1; valor_atributo1_carta2 = (float)populacao_carta2; break;
        case 2: valor_atributo1_carta1 = area_carta1; valor_atributo1_carta2 = area_carta2; break;
        case 3: valor_atributo1_carta1 = pib_carta1; valor_atributo1_carta2 = pib_carta2; break;
        case 4: valor_atributo1_carta1 = (float)pontos_turisticos_carta1; valor_atributo1_carta2 = (float)pontos_turisticos_carta2; break;
        case 5: valor_atributo1_carta1 = densidade_populacional_carta1; valor_atributo1_carta2 = densidade_populacional_carta2; break;
        case 6: valor_atributo1_carta1 = pib_per_capita_carta1; valor_atributo1_carta2 = pib_per_capita_carta2; break;
    }

    // Atributo 2
    switch (escolha_atributo2) {
        case 1: valor_atributo2_carta1 = (float)populacao_carta1; valor_atributo2_carta2 = (float)populacao_carta2; break;
        case 2: valor_atributo2_carta1 = area_carta1; valor_atributo2_carta2 = area_carta2; break;
        case 3: valor_atributo2_carta1 = pib_carta1; valor_atributo2_carta2 = pib_carta2; break;
        case 4: valor_atributo2_carta1 = (float)pontos_turisticos_carta1; valor_atributo2_carta2 = (float)pontos_turisticos_carta2; break;
        case 5: valor_atributo2_carta1 = densidade_populacional_carta1; valor_atributo2_carta2 = densidade_populacional_carta2; break;
        case 6: valor_atributo2_carta1 = pib_per_capita_carta1; valor_atributo2_carta2 = pib_per_capita_carta2; break;
    }

    // --- Lógica de Comparação Individual dos Atributos ---
    // Usamos operadores ternários para determinar os "pontos" de cada atributo
    // Se o atributo é Densidade Demográfica (opção 5), menor valor vence
    // Caso contrário, maior valor vence
    float pontos_atr1_carta1 = (escolha_atributo1 == 5) ?
                                (valor_atributo1_carta1 < valor_atributo1_carta2 ? 1.0F : 0.0F) : // Densidade: menor vence
                                (valor_atributo1_carta1 > valor_atributo1_carta2 ? 1.0F : 0.0F); // Outros: maior vence

    float pontos_atr1_carta2 = (escolha_atributo1 == 5) ?
                                (valor_atributo1_carta2 < valor_atributo1_carta1 ? 1.0F : 0.0F) :
                                (valor_atributo1_carta2 > valor_atributo1_carta1 ? 1.0F : 0.0F);

    float pontos_atr2_carta1 = (escolha_atributo2 == 5) ?
                                (valor_atributo2_carta1 < valor_atributo2_carta2 ? 1.0F : 0.0F) :
                                (valor_atributo2_carta1 > valor_atributo2_carta2 ? 1.0F : 0.0F);

    float pontos_atr2_carta2 = (escolha_atributo2 == 5) ?
                                (valor_atributo2_carta2 < valor_atributo2_carta1 ? 1.0F : 0.0F) :
                                (valor_atributo2_carta2 > valor_atributo2_carta1 ? 1.0F : 0.0F);

    // --- Exibição dos Detalhes da Comparação ---
    printf("\n--- Detalhes da Rodada ---\n");
    printf("Atributo 1: %s\n", nomes_atributos[escolha_atributo1]);
    printf("  %s: ", nome_pais_carta1);
    // Formatação específica para População e PIB
    if (escolha_atributo1 == 1) printf("%lu\n", (unsigned long int)valor_atributo1_carta1);
    else if (escolha_atributo1 == 3) printf("%.2f trilhões de dólares\n", valor_atributo1_carta1);
    else if (escolha_atributo1 == 5) printf("%.2f hab/km\u00b2\n", valor_atributo1_carta1);
    else if (escolha_atributo1 == 6) printf("%.2f dólares\n", valor_atributo1_carta1);
    else printf("%.2f\n", valor_atributo1_carta1);

    printf("  %s: ", nome_pais_carta2);
    if (escolha_atributo1 == 1) printf("%lu\n", (unsigned long int)valor_atributo1_carta2);
    else if (escolha_atributo1 == 3) printf("%.2f trilhões de dólares\n", valor_atributo1_carta2);
    else if (escolha_atributo1 == 5) printf("%.2f hab/km\u00b2\n", valor_atributo1_carta2);
    else if (escolha_atributo1 == 6) printf("%.2f dólares\n", valor_atributo1_carta2);
    else printf("%.2f\n", valor_atributo1_carta2);


    printf("Atributo 2: %s\n", nomes_atributos[escolha_atributo2]);
    printf("  %s: ", nome_pais_carta1);
    if (escolha_atributo2 == 1) printf("%lu\n", (unsigned long int)valor_atributo2_carta1);
    else if (escolha_atributo2 == 3) printf("%.2f trilhões de dólares\n", valor_atributo2_carta1);
    else if (escolha_atributo2 == 5) printf("%.2f hab/km\u00b2\n", valor_atributo2_carta1);
    else if (escolha_atributo2 == 6) printf("%.2f dólares\n", valor_atributo2_carta1);
    else printf("%.2f\n", valor_atributo2_carta1);

    printf("  %s: ", nome_pais_carta2);
    if (escolha_atributo2 == 1) printf("%lu\n", (unsigned long int)valor_atributo2_carta2);
    else if (escolha_atributo2 == 3) printf("%.2f trilhões de dólares\n", valor_atributo2_carta2);
    else if (escolha_atributo2 == 5) printf("%.2f hab/km\u00b2\n", valor_atributo2_carta2);
    else if (escolha_atributo2 == 6) printf("%.2f dólares\n", valor_atributo2_carta2);
    else printf("%.2f\n", valor_atributo2_carta2);


    // --- Soma dos "pontos" de vitória de cada atributo (1.0 se venceu, 0.0 se perdeu/empatou) ---
    soma_atributos_carta1 = pontos_atr1_carta1 + pontos_atr2_carta1;
    soma_atributos_carta2 = pontos_atr1_carta2 + pontos_atr2_carta2;

    printf("\n--- Resultado Final ---\n");
    printf("Soma dos pontos %s: %.0f\n", nome_pais_carta1, soma_atributos_carta1);
    printf("Soma dos pontos %s: %.0f\n", nome_pais_carta2, soma_atributos_carta2);

    if (soma_atributos_carta1 > soma_atributos_carta2) {
        printf("Vencedor: Carta 1 (%s)!\n", nome_pais_carta1);
    } else if (soma_atributos_carta2 > soma_atributos_carta1) {
        printf("Vencedor: Carta 2 (%s)!\n", nome_pais_carta2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0; // Indica que o programa foi executado com sucesso
}
