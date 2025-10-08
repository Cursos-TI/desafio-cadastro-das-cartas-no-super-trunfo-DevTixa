#include <stdio.h>

int main() {
   // Variáveis da Carta 1
   char estado1, cidade1[50], codigocarta1[4];
   int PontosTuristicos1;
   unsigned long int populacao1; 
   float area1, pib1, densidade1, pibpercapita1;
   double superpoder1;
   
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
   float area2, pib2, densidade2, pibpercapita2;
   double superpoder2;

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

   printf("\n=====================================\n");
   printf("          CARTAS CADASTRADAS         \n");
   printf("=====================================\n");

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
   printf("Super Poder: %.lf\n", superpoder1);

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
   printf("Super Poder: %.lf\n", superpoder2);

   // Escolher qual Atributo Comparar!
   int primeiroAtributo, segundoAtributo;
   float resultado1carta1, resultado1carta2, resultado2carta1, resultado2carta2;

   printf("\n=====================================\n");
   printf("        ESCOLHA DE ATRIBUTOS      \n");
   printf("=====================================\n");

   printf("\n--- Escolha o Primeiro Atributo! ---\n");
   printf("1. População\n");
   printf("2. Área\n");
   printf("3. PIB\n");
   printf("4. Número de Pontos Turísticos\n");
   printf("5. Densidade Demográfica\n");

   printf("Escolha o Atributo: ");
   scanf("%d", &primeiroAtributo);

   switch (primeiroAtributo)
   {
    // Comparação da População
   case 1:
    printf("Você escolheu o atributo População!\n");
    resultado1carta1 = populacao1; resultado1carta2 = populacao2;
    break;
    // Comparação da Área
   case 2:
    printf("Você escolheu o atributo Área!\n");
    resultado1carta1 = area1; resultado1carta2 = area2;
    break;
    // Comparação do PIB
   case 3:
    printf("Você escolheu o atributo PIB!\n");
    resultado1carta1 = pib1; resultado1carta2 = pib2;
    break;
     // Comparação do Número de Pontos Turísticos
    case 4:
    printf("Você escolheu o atributo Número de Pontos Turísticos!\n");
    resultado1carta1 = PontosTuristicos1; resultado1carta2 = PontosTuristicos2;
    break;
     // Comparação da Densidade Demográfica
    case 5:
    printf("Você escolheu o atributo Densidade Demográfica!\n");
    resultado1carta1 = densidade1; resultado1carta2 = densidade2;
    break;
   default:
    printf("Opção de jogo Inválida!");
    break;
   }
   
   printf("\n--- Escolha o Segundo Atributo! ---\n");
   printf("Atenção: Você deve escolher um atributo diferente do primeiro.\n");
   printf("1. População\n");
   printf("2. Área\n");
   printf("3. PIB\n");
   printf("4. Número de Pontos Turísticos\n");
   printf("5. Densidade Demográfica\n");

   printf("Escolha o Atributo: ");
   scanf("%d", &segundoAtributo);

   float resultado2;

   if (primeiroAtributo == segundoAtributo) {
    printf("Você escolheu o mesmo Atributo!\n");
   } else {
    switch (segundoAtributo) {
    case 1:
        printf("Você escolheu o atributo População!\n");
        resultado2carta1 = populacao1; resultado2carta2 = populacao2;
        break;
    case 2:
        printf("Você escolheu o atributo Área!\n");
        resultado2carta1 = area1; resultado2carta2 = area2;
        break;
    case 3:
        printf("Você escolheu o atributo PIB!\n");
        resultado2carta1 = pib1; resultado2carta2 = pib2;
        break;
    case 4:
        printf("Você escolheu o atributo Número de Pontos Turísticos!\n");
        resultado2carta1 = PontosTuristicos1; resultado2carta2 = PontosTuristicos2;
        break;
    case 5:
        printf("Você escolheu o atributo Densidade Demográfica!\n");
        resultado2carta1 = densidade1; resultado2carta2 = densidade2;
        break;
    default:
        printf("Opção de jogo Inválida!");
        break;
    }
   }
   
   // --- Comparações ---
    float soma1, soma2;

    float pontos1 = (primeiroAtributo == 5) ? (resultado1carta1 < resultado1carta2) : (resultado1carta1 > resultado1carta2);
    float pontos2 = (segundoAtributo == 5) ? (resultado2carta1 < resultado2carta2) : (resultado2carta1 > resultado2carta2);

    soma1 = resultado1carta1 + resultado2carta1;
    soma2 = resultado1carta2 + resultado2carta2;

    printf("\n=====================================\n");
    printf("        RESULTADO DA COMPARAÇÃO      \n");
    printf("=====================================\n");
    printf("Carta 1 - %s\n", cidade1);
    printf("Carta 2 - %s\n", cidade2);

    printf("\nAtributo 1: %.2f x %.2f\n", resultado1carta1, resultado1carta2);
    printf("Atributo 2: %.2f x %.2f\n", resultado2carta1, resultado2carta2);
    printf("\nSoma Final:\nCarta 1: %.2f\nCarta 2: %.2f\n", soma1, soma2);



   if (soma1 == soma2) {
        printf("\n### EMPATE! ###\n");
    } else if (soma1 > soma2) {
        printf("\n### CARTA 1 VENCEU! ###\n");
    } else {
        printf("\n### CARTA 2 VENCEU! ###\n");
    }

return 0;
}