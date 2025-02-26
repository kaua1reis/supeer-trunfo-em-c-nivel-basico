#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados das duas cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    // Variáveis para armazenar os atributos calculados
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade1);  // Leitura de uma string com espaços

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Leitura dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade2);  // Leitura de uma string com espaços

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Cálculo dos novos atributos (Nível Aventureiro)
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // Cálculo do Super Poder (Nível Mestre)
    superPoder1 = pib1 + pibPerCapita1 + pontos1 + (1 / densidade1);
    superPoder2 = pib2 + pibPerCapita2 + pontos2 + (1 / densidade2);

    // Exibição dos dados das duas cartas (com os novos atributos calculados)
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per Capita: %.2f bilhões de reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per Capita: %.2f bilhões de reais\n", pibPerCapita2);

    // Comparação dos atributos (Nível Mestre)
    printf("\nComparação de Atributos:\n");

    // Comparação de densidade populacional (menor é melhor)
    printf("Densidade Populacional: ");
    if (densidade1 < densidade2) {
        printf("Carta 1 vence\n");
    } else {
        printf("Carta 2 vence\n");
    }

    // Comparação de PIB (maior é melhor)
    printf("PIB: ");
    if (pib1 > pib2) {
        printf("Carta 1 vence\n");
    } else {
        printf("Carta 2 vence\n");
    }

    // Comparação de número de pontos turísticos (maior é melhor)
    printf("Número de Pontos Turísticos: ");
    if (pontos1 > pontos2) {
        printf("Carta 1 vence\n");
    } else {
        printf("Carta 2 vence\n");
    }

    // Comparação de PIB per Capita (maior é melhor)
    printf("PIB per Capita: ");
    if (pibPerCapita1 > pibPerCapita2) {
        printf("Carta 1 vence\n");
    } else {
        printf("Carta 2 vence\n");
    }

    // Comparação de Super Poder (maior é melhor)
    printf("Super Poder: ");
    if (superPoder1 > superPoder2) {
        printf("Carta 1 vence\n");
    } else {
        printf("Carta 2 vence\n");
    }

    return 0;
}
