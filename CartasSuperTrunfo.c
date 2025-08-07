#include <stdio.h>

// Estrutura que representa uma carta do Super Trunfo
int main(){
   char estado, cidade[50];
   int população, PontosTuristicos;
   float area, pib;;

   //carta 01
   
   printf("\n--- Cadastrar Primeira Carta ---\n");

   printf("Digite seu Estado: ");
   scanf(" %c", &estado);

   printf("Digite o nome da Cidade: ");
   scanf("%s", cidade);

   printf("Digite o Número de Habitantes: ");
   scanf("%d", &população);

   printf("Digite a Área da Cidade: ");
   scanf("%f", &area);

   printf("Digite o PIB: ");
   scanf("%f", &pib);

   printf("Digite a quantidade de pontos turísticos na Cidade: ");
   scanf("%d", &PontosTuristicos);
   
   // Exibindo os dados inseridos
   printf("\nCarta 1:\n");
   printf("Estado: %c\n", estado);
   printf("Código: %c01\n", estado);
   printf("Nome da Cidade: %s\n", cidade);
   printf("População: %d\n", população);
   printf("Área: %.2f km²\n", area);
   printf("PIB: %.2f Bilhôes de reais\n", pib);
   printf("Número de Pontos Turísticos: %d Locais\n", PontosTuristicos);
   
   //carta 02
   
   printf("\n--- Cadastrar Segunda Carta ---\n");
   
   printf("Digite seu Estado: ");
   scanf(" %c", &estado);

   printf("Digite o nome da Cidade: ");
   scanf("%s", cidade);

   printf("Digite o Número de Habitantes: ");
   scanf("%d", &população);

   printf("Digite a Área da Cidade: ");
   scanf("%f", &area);

   printf("Digite o PIB: ");
   scanf("%f", &pib);

   printf("Digite a quantidade de pontos turísticos na Cidade: ");
   scanf("%d", &PontosTuristicos);
   
   // Exibindo os dados inseridos
   printf("\nCarta 2:\n");
   printf("Estado: %c\n", estado);
   printf("Código: %c02\n", estado);
   printf("Nome da Cidade: %s\n", cidade);
   printf("População: %d\n", população);
   printf("Área: %.2f km²\n", area);
   printf("PIB: %.2f Bilhôes de reais\n", pib);
   printf("Número de Pontos Turísticos: %d Locais\n", PontosTuristicos);
   
   return 0;
}