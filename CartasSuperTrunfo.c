#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Definindo as variáveis para armazenar os dados das cartas
    char estado1, estado2;           // Estado (A-H)
    char codigo1[4], codigo2[4];     // Código da carta (A01, A02, etc)
    char cidade1[100], cidade2[100]; // Nome da cidade
    int populacao1, populacao2;      // População
    float area1, area2;              // Área da cidade em km²
    float pib1, pib2;                // PIB da cidade
    int pontos1, pontos2;            // Número de pontos turísticos

    // Leitura dos dados para a Carta 1
    printf("Digite os dados da primeira carta (Cidade 1):\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);  // O espaço antes do %c garante que não haja problema com a leitura do caractere
    printf("Código da carta (A01, B02, etc): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %99[^\n]", cidade1); // Lê uma linha inteira com espaços
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Leitura dos dados para a Carta 2
    printf("\nDigite os dados da segunda carta (Cidade 2):\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da carta (A01, B02, etc): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %99[^\n]", cidade2); // Lê uma linha inteira com espaços
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Exibindo as informações das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}
