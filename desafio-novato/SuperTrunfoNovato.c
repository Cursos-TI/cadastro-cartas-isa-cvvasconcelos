#include <stdio.h>

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado;
    int numero;
    char nome[50];
    char pais[50];
    long long populacao;
    float area;
    float pib;
    int turisticos;

    // Entrada de dados
    printf("=================================\n");
    printf("   SUPER TRUNFO - PAISES\n");
    printf("=================================\n\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado);

    printf("Numero da cidade (1 a 4): ");
    scanf("%d", &numero);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome);

    printf("Nome do pais: ");
    scanf(" %[^\n]", pais);

    printf("Populacao: ");
    scanf("%lld", &populacao);

    printf("Area (km2): ");
    scanf("%f", &area);

    printf("PIB (em bilhoes R$): ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &turisticos);

   // Exibição dos dados das cartas
    printf("\n=================================\n");
    printf("   CARTA CADASTRADA\n");
    printf("=================================\n");
    printf("Codigo      : %c0%d\n", estado, numero);
    printf("Cidade      : %s\n", nome);
    printf("Pais        : %s\n", pais);
    printf("---------------------------------\n");
    printf("Populacao        : %lld hab.\n", populacao);
    printf("Area             : %.2f km2\n", area);
    printf("PIB              : R$ %.2f bi\n", pib);
    printf("Pontos turisticos: %d\n", turisticos);
    printf("=================================\n");

    return 0;
}
