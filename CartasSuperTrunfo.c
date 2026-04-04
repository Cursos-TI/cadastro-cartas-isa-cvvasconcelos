#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado;
    char codigo[20];
    char cidade[20];
    float area_km²;
    float PIB;
    int populacao;
    int pontos_turisticos;

    // Entrada de dados
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado);

    printf("Código da carta: ");
    scanf(" %s", codigo);

    printf("Cidade: ");
    scanf("%s", cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área em km²: ");
    scanf("%f", &area_km²);

    printf("PIB: ");
    scanf("%f", &PIB);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos dados das cartas
    printf("\nCarta cadastrada: \n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area_km²);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}