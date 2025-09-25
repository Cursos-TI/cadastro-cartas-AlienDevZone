#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
    char estado[10], codigo[10], cidade [10], Estado[10], Codigo[10], Cidade[10];
    float pib, area, PIB, Area;
    int populacao, atracao, Populacao, Atracao;
        //atracao = pontos turisticos
  
  // Área para entrada de dados
  
    printf("Carta 1 \n");
    printf("Digite o Nome do Estado: \n");
    scanf("%s", &Estado);
    printf("Digite o Código da Carta: \n");
    scanf("%s", &Codigo);
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &Cidade);
    printf("Digite a Quantidade de Habitantes: \n");
    scanf("%d", &Populacao);
    printf("Digite a Área em km²: \n");
    scanf("%f", &Area);
    printf("Digite o PIB em bilhões de reais: \n");
    scanf("%f", &PIB);
    printf("O Numero de Pontos Turísticos: \n");
    scanf("%d", &Atracao);

    printf("Carta 2 \n");
    printf("Digite o Nome do Estado: \n");
    scanf("%s", &estado);
    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigo);
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &cidade);
    printf("Digite a Quantidade de Habitantes: \n");
    scanf("%d", &populacao);
    printf("Digite a Área em km²: \n");
    scanf("%f", &area);
    printf("Digite o PIB em bilhões de reais: \n");
    scanf("%f", &pib);
    printf("O Numero de Pontos Turísticos: \n");
    scanf("%d", &atracao);

  // Área para exibição dos dados da cidade

    printf("Carta 1 \n");
    printf("Estado: %s\n", Estado);
    printf("Código da Carta: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("Quantidade de Habitantes: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", Atracao);

    printf("Carta 2 \n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Quantidade de Habitantes: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", atracao);
} 
