#include <stdio.h>

// Estrutura que representa uma carta do Super Trunfo
int main(){
   char estado, cidade[50];
   int populacao, PontosTuristicos;
   float area, pib, densidade, pibpercapita;

   //carta 01
   
   // Pedir os dados da carta
   printf("\n--- Cadastrar Primeira Carta ---\n");

   printf("Digite seu Estado: ");
   scanf(" %c", &estado);

   printf("Digite o nome da Cidade: ");
   scanf("%s", cidade);

   printf("Digite o Número de Habitantes: ");
   scanf("%d", &populacao);

   printf("Digite a Área da Cidade: ");
   scanf("%f", &area);

   printf("Digite o PIB: ");
   scanf("%f", &pib);

   printf("Digite a quantidade de pontos turísticos na Cidade: ");
   scanf("%d", &PontosTuristicos);
   
   // Calcular a densidade populacional e pib per capita
   densidade = (float) populacao / area;
   pibpercapita = (float) pib / populacao;

   // Exibindo os dados inseridos
   printf("\nCarta 1:\n");
   printf("Estado: %c\n", estado);
   printf("Código: %c01\n", estado);
   printf("Nome da Cidade: %s\n", cidade);
   printf("População: %d\n", populacao);
   printf("Área: %.2f km²\n", area);
   printf("PIB: %.2f reais\n", pib);
   printf("Número de Pontos Turísticos: %d Locais\n", PontosTuristicos);
   printf("Densidade Populacional: %.2f hab/km²\n", densidade);
   printf("PIB per Capita: %.2f reais\n", pibpercapita);
   
   //carta 02
   
   // Pedir os dados da carta
   printf("\n--- Cadastrar Segunda Carta ---\n");
   
   printf("Digite seu Estado: ");
   scanf(" %c", &estado);

   printf("Digite o nome da Cidade: ");
   scanf("%s", cidade);

   printf("Digite o Número de Habitantes: ");
   scanf("%d", &populacao);

   printf("Digite a Área da Cidade: ");
   scanf("%f", &area);

   printf("Digite o PIB: ");
   scanf("%f", &pib);

   printf("Digite a quantidade de pontos turísticos na Cidade: ");
   scanf("%d", &PontosTuristicos);
   
   // Calcular a densidade populacional e pib per capita
   densidade = (float) populacao / area;
   pibpercapita = (float) pib / populacao;

   // Exibindo os dados inseridos
   printf("\nCarta 2:\n");
   printf("Estado: %c\n", estado);
   printf("Código: %c02\n", estado);
   printf("Nome da Cidade: %s\n", cidade);
   printf("População: %d\n", populacao);
   printf("Área: %.2f km²\n", area);
   printf("PIB: %.2f reais\n", pib);
   printf("Número de Pontos Turísticos: %d Locais\n", PontosTuristicos);
   printf("Densidade Populacional: %.2f hab/km²\n", densidade);
   printf("PIB per Capita: %.2f reais\n", pibpercapita);

   return 0;
}