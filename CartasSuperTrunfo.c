#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    // --- Definindo das variáveis para a Carta 1 ---
    char estado_carta1;                 // Armazena a letra do estado (A-H)
    char codigo_carta1[5];              // Armazena o código da carta (ex: A01)
    char nome_cidade_carta1[50];        // Armazena o nome da cidade
    int populacao_carta1;               // Armazena o número de habitantes
    float area_carta1;                  // Armazena a área em km²
    float pib_carta1;                   // Armazena o PIB em bilhões de reais
    int pontos_turisticos_carta1;       // Armazena o número de pontos turísticos

    // --- Definindo das variáveis para a Carta 2 ---
    char estado_carta2;                 // Armazena a letra do estado (A-H)
    char codigo_carta2[5];              // Armazena o código da carta (ex: B02)
    char nome_cidade_carta2[50];        // Armazena o nome da cidade
    int populacao_carta2;               // Armazena o número de habitantes
    float area_carta2;                  // Armazena a área em km²
    float pib_carta2;                   // Armazena o PIB em bilhões de reais
    int pontos_turisticos_carta2;       // Armazena o número de pontos turísticos

    // --- Entrada de dados para a Carta 1 ---
    printf("--- Insira os dados da Carta 1 ---\n");
    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado_carta1); // O espaço antes de %c serve para consumir qualquer caractere de nova linha pendente

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo_carta1); // %s lê uma string até encontrar um espaço em branco

    printf("Nome da Cidade: ");
    // Limpa o buffer de entrada para evitar problemas com o fgets
    while (getchar() != '\n');
    fgets(nome_cidade_carta1, sizeof(nome_cidade_carta1), stdin); // Lê a linha inteira, incluindo espaços

    printf("Populacao: ");
    scanf("%d", &populacao_carta1);

    printf("Area (em km^2): ");
    scanf("%f", &area_carta1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib_carta1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos_carta1);

    // --- Entrada de dados para a Carta 2 ---
    printf("\n--- Insira os dados da Carta 2 ---\n");
    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado_carta2); // O espaço antes de %c serve para consumir qualquer caractere de nova linha pendente

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo_carta2); // %s lê uma string até encontrar um espaço em branco

    printf("Nome da Cidade: ");
    // Limpa o buffer de entrada para evitar problemas com o fgets
    while (getchar() != '\n');
    fgets(nome_cidade_carta2, sizeof(nome_cidade_carta2), stdin); // Lê a linha inteira, incluindo espaços

    printf("Populacao: ");
    scanf("%d", &populacao_carta2);

    printf("Area (em km^2): ");
    scanf("%f", &area_carta2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib_carta2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos_carta2);

    // --- Exibição dos dados da Carta 1 ---
    printf("\n--- Informacoes da Carta 1 ---\n");
    printf("Estado: %c\n", estado_carta1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s", nome_cidade_carta1); // %s já imprime a quebra de linha se o fgets leu
    printf("Populacao: %d\n", populacao_carta1);
    printf("Area: %.2f km\u00b2\n", area_carta1); // \u00b2 para o caractere de ²
    printf("PIB: %.2f bilhoes de reais\n", pib_carta1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_carta1);

    // --- Exibição dos dados da Carta 2 ---
    printf("\n--- Informacoes da Carta 2 ---\n");
    printf("Estado: %c\n", estado_carta2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s", nome_cidade_carta2); // %s já imprime a quebra de linha se o fgets leu
    printf("Populacao: %d\n", populacao_carta2);
    printf("Area: %.2f km\u00b2\n", area_carta2);
    printf("PIB: %.2f bilhoes de reais\n", pib_carta2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_carta2);

    return 0; // Indica que o programa foi executado com sucesso
}
