#include <stdio.h>

int main() {
    // --- Carta 1 ---
    char estado1;
    int numero1;
    char nome1[50];
    char pais1[50];
    long long populacao1;
    float area1;
    float pib1;
    int turisticos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // --- Carta 2 ---
    char estado2;
    int numero2;
    char nome2[50];
    char pais2[50];
    long long populacao2;
    float area2;
    float pib2;
    int turisticos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

        printf("=================================\n");
        printf("   SUPER TRUNFO - PAISES\n");
        printf("=================================\n\n");

    // Entrada de dados da carta 1
        printf("--- CADASTRO DA CARTA 1 ---\n");
        printf("Estado (A a H): ");
        scanf(" %c", &estado1);

        printf("Numero da cidade (1 a 4): ");
        scanf("%d", &numero1);

        printf("Nome da cidade: ");
        scanf(" %[^\n]", nome1);

        printf("Nome do pais: ");
        scanf(" %[^\n]", pais1);

        printf("Populacao: ");
        scanf("%lld", &populacao1);

        printf("Area (km2): ");
        scanf("%f", &area1);

        printf("PIB (em bilhoes R$): ");
        scanf("%f", &pib1);

        printf("Pontos turisticos: ");
        scanf("%d", &turisticos1);

    // Entrada de dados da carta 2
        printf("\n--- CADASTRO DA CARTA 2 ---\n");
        printf("Estado (A a H): ");
        scanf(" %c", &estado2);

        printf("Numero da cidade (1 a 4): ");
        scanf("%d", &numero2);

        printf("Nome da cidade: ");
        scanf(" %[^\n]", nome2);

        printf("Nome do pais: ");
        scanf(" %[^\n]", pais2);

        printf("Populacao: ");
        scanf("%lld", &populacao2);

        printf("Area (km2): ");
        scanf("%f", &area2);

        printf("PIB (em bilhoes R$): ");
        scanf("%f", &pib2);

        printf("Pontos turisticos: ");
        scanf("%d", &turisticos2);

    // Cálculos referentes à carta 1
    densidade1     = (float)populacao1 / area1;
    pibPerCapita1  = (pib1 * 1e9f) / (float)populacao1;
    superPoder1    = (float)populacao1 + area1 + pib1
                     + turisticos1 + densidade1 + pibPerCapita1;

    // Cálculos referentes à carta 2
    densidade2     = (float)populacao2 / area2;
    pibPerCapita2  = (pib2 * 1e9f) / (float)populacao2;
    superPoder2    = (float)populacao2 + area2 + pib2
                     + turisticos2 + densidade2 + pibPerCapita2;

    // Exibição das cartas cadastradas
        printf("\n=================================\n");
        printf("   CARTA 1: %c0%d - %s\n", estado1, numero1, nome1);
        printf("=================================\n");
        printf("Populacao        : %lld hab.\n", populacao1);
        printf("Area             : %.2f km2\n", area1);
        printf("PIB              : R$ %.2f bi\n", pib1);
        printf("Pontos turisticos: %d\n", turisticos1);
        printf("Densidade pop.   : %.2f hab/km2\n", densidade1);
        printf("PIB per capita   : R$ %.2f\n", pibPerCapita1);
        printf("Super poder      : %.2f\n", superPoder1);

        printf("\n=================================\n");
        printf("   CARTA 2: %c0%d - %s\n", estado2, numero2, nome2);
        printf("=================================\n");
        printf("Populacao        : %lld hab.\n", populacao2);
        printf("Area             : %.2f km2\n", area2);
        printf("PIB              : R$ %.2f bi\n", pib2);
        printf("Pontos turisticos: %d\n", turisticos2);
        printf("Densidade pop.   : %.2f hab/km2\n", densidade2);
        printf("PIB per capita   : R$ %.2f\n", pibPerCapita2);
        printf("Super poder      : %.2f\n", superPoder2);

    // Comparação 
        printf("\n=================================\n");
        printf("   RESULTADO DA COMPARACAO\n");
        printf("=================================\n");

        printf("Populacao        : ");
        if (populacao1 > populacao2)       printf("Carta 1 vence! Quanta gente!\n");
        else if (populacao2 > populacao1)  printf("Carta 2 vence! Quanta gente!\n");
        else                               printf("Empate tecnico! Ambas sao boas demais para perderem!\n");

        printf("Area             : ");
        if (area1 > area2)       printf("Carta 1 vence! Que ambiente vasto, nao?\n");
        else if (area2 > area1)  printf("Carta 2 vence! Que ambiente vasto, nao?\n");
        else                     printf("Empate tecnico! Ambas sao boas demais para perderem!\n");

        printf("PIB              : ");
        if (pib1 > pib2)       printf("Carta 1 vence! Quanta riqueza, hein?\n");
        else if (pib2 > pib1)  printf("Carta 2 vence! Quanta riqueza, hein?\n");
        else                   printf("Empate tecnico! Ambas sao boas demais para perderem!\n");

        printf("Pontos turisticos: ");
        if (turisticos1 > turisticos2)       printf("Carta 1 vence! Realmente, nao da pra dizer que nada tem a fazer\n");
        else if (turisticos2 > turisticos1)  printf("Carta 2 vence! Realmente, nao da pra dizer que nada tem a fazer\n");
        else                                 printf("Empate tecnico! Ambas sao boas demais para perderem!\n");

    // Densidade: menor vence
        printf("Densidade pop.   : ");
        if (densidade1 < densidade2)       printf("Carta 1 vence! Menos gente, mais espaco!\n");
        else if (densidade2 < densidade1)  printf("Carta 2 vence! Menos gente, mais espaco!\n");
        else                               printf("Empate tecnico! Ambas sao boas demais para perderem!\n");

        printf("PIB per capita   : ");
        if (pibPerCapita1 > pibPerCapita2)       printf("Carta 1 vence! Mais riqueza por pessoa!\n");
        else if (pibPerCapita2 > pibPerCapita1)  printf("Carta 2 vence! Mais riqueza por pessoa!\n");
        else                                     printf("Empate tecnico! Ambas sao boas demais para perderem!\n");

        printf("Super poder      : ");
        if (superPoder1 > superPoder2)       printf("Carta 1 vence! Aoo, potencia!\n");
        else if (superPoder2 > superPoder1)  printf("Carta 2 vence! Aoo, potencia!\n");
        else                                 printf("Empate tecnico! Ambas sao boas demais para perderem!\n");

    printf("=================================\n");

    return 0;
}
