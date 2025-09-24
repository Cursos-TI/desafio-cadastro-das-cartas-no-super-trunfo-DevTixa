#include <stdio.h>

int main() {
   // Variáveis da Carta 1
   char estado1, cidade1[50], codigocarta1[4];
   int PontosTuristicos1;
   unsigned long int populacao1; 
   float area1, pib1, densidade1, pibpercapita1, superpoder1;
   
   // Carta 01
   printf("\n--- Cadastrar Primeira Carta ---\n");
   printf("Digite seu Estado: ");
   scanf(" %c", &estado1);

   printf("Digite o Código da Carta: ");
   scanf("%3s", codigocarta1);

   printf("Digite o nome da Cidade: ");
   scanf(" %49[^\n]", cidade1);

   printf("Digite o Número de Habitantes: ");
   scanf("%lu", &populacao1);

   printf("Digite a Área da Cidade: ");
   scanf("%f", &area1);

   printf("Digite o PIB: ");
   scanf("%f", &pib1);

   printf("Digite a quantidade de pontos turísticos na Cidade: ");
   scanf("%d", &PontosTuristicos1);
   
   // Calcular a densidade populacional e pib per capita
   densidade1 = (float) populacao1 / area1;
   pibpercapita1 = (float) pib1 / populacao1;

   // Variáveis da Carta 2
   char estado2, cidade2[50], codigocarta2[4];
   int PontosTuristicos2;
   unsigned long int populacao2;
   float area2, pib2, densidade2, pibpercapita2, superpoder2;

   // Carta 02
   printf("\n--- Cadastrar Segunda Carta ---\n");
   printf("Digite seu Estado: ");
   scanf(" %c", &estado2);

   printf("Digite o Código da Carta: ");
   scanf("%3s", codigocarta2);

   printf("Digite o nome da Cidade: ");
   scanf(" %49[^\n]", cidade2);

   printf("Digite o Número de Habitantes: ");
   scanf("%lu", &populacao2);

   printf("Digite a Área da Cidade: ");
   scanf("%f", &area2);

   printf("Digite o PIB: ");
   scanf("%f", &pib2);

   printf("Digite a quantidade de pontos turísticos na Cidade: ");
   scanf("%d", &PontosTuristicos2);
   
   // Calcular a densidade populacional e pib per capita
   densidade2 = (float) populacao2 / area2;
   pibpercapita2 = (float) pib2 / populacao2;

   // Calcular Super Poder (inclui inverso da densidade)
   superpoder1 = (float) populacao1 + area1 + pib1 + PontosTuristicos1 + pibpercapita1 + (1.0f / densidade1);
   superpoder2 = (float) populacao2 + area2 + pib2 + PontosTuristicos2 + pibpercapita2 + (1.0f / densidade2);

   // Exibir cartas
   printf("\nCarta 1:\n");
   printf("Estado: %c\n", estado1);
   printf("Código: %3s\n", codigocarta1);
   printf("Nome da Cidade: %s\n", cidade1);
   printf("População: %lu\n", populacao1);
   printf("Área: %.2f km²\n", area1);
   printf("PIB: %.2f reais\n", pib1);
   printf("Número de Pontos Turísticos: %d Locais\n", PontosTuristicos1);
   printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
   printf("PIB per Capita: %.2f reais\n", pibpercapita1);
   printf("Super Poder: %.2f\n", superpoder1);

   printf("\nCarta 2:\n");
   printf("Estado: %c\n", estado2);
   printf("Código: %3s\n", codigocarta2);
   printf("Nome da Cidade: %s\n", cidade2);
   printf("População: %lu\n", populacao2);
   printf("Área: %.2f km²\n", area2);
   printf("PIB: %.2f reais\n", pib2);
   printf("Número de Pontos Turísticos: %d Locais\n", PontosTuristicos2);
   printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
   printf("PIB per Capita: %.2f reais\n", pibpercapita2);
   printf("Super Poder: %.2f\n", superpoder2);

   // Comparações de Cartas
   printf("\n--- Comparações ---\n");
   
   // Calculo da população
      if (populacao1 > populacao2){
       printf("População: Carta 1 Venceu (%d)\n", (populacao1 > populacao2));
   }else {
       printf("População: Carta 2 Venceu (%d)\n", (populacao1 > populacao2));
   }

   // Calculo da área
   if (area1 > area2){
       printf("Área: Carta 1 Venceu (%d)\n", (area1 > area2));
   }else {
       printf("Área: Carta 2 Venceu (%d)\n", (area1 > area2));
   }  

   // Calculo do PIB
   if (pib1 > pib2){
       printf("PIB: Carta 1 Venceu (%d)\n", (pib1 > pib2));
   }else {
       printf("PIB: Carta 2 Venceu (%d)\n", (pib1 > pib2));
   }  

   // Calculo do Pontos Turísticos
   if (PontosTuristicos1 > PontosTuristicos2){
       printf("Pontos Turísticos: Carta 1 Venceu (%d)\n", (PontosTuristicos1 > PontosTuristicos2));
   }else {
       printf("Pontos Turísticos: Carta 2 Venceu (%d)\n", (PontosTuristicos1 > PontosTuristicos2));
   }  
   
   // Calculo da Densidade Populacional
   if (densidade1 < densidade2){
       printf("Densidade Populacional: Carta 1 Venceu (%d)\n", (densidade1 < densidade2));
   }else {
       printf("Densidade Populacional: Carta 2 Venceu (%d)\n", (densidade1 < densidade2));
   }  

   // Calculo do PIB per Capita
   if (pibpercapita1 > pibpercapita2){
       printf("PIB per Capita: Carta 1 Venceu (%d)\n", (pibpercapita1 > pibpercapita2));
   }else {
       printf("PIB per Capita: Carta 2 Venceu (%d)\n", (pibpercapita1 > pibpercapita2));
   }  

   // Calculo do Super Poder
   if (superpoder1 > superpoder2){
       printf("Super Poder: Carta 1 Venceu (%d)\n", (superpoder1 > superpoder2));
   }else {
       printf("Super Poder: Carta 2 Venceu (%d)\n", (superpoder1 > superpoder2));
   }  
   
return 0;
}