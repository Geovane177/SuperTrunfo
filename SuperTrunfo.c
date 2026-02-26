#include <stdio.h>
#include <windows.h>

int main(){

    char estado1, estado2;
    char CodigoCarta1[4];
    char CodigoCarta2[4];
    char NomeCidade1[25];
    char NomeCidade2[25];
    unsigned int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int QuantPontosTuristicos1, QuantPontosTuristicos2;
    float DensidadePopulacional1, DensidadePopulacional2;
    float PIBperCapita1, PIBperCapita2;
    float SuperPoder1, SuperPoder2;
    int resultado;

    printf("____Criação de carta numero 1____\n");
    
    printf("\n Digite a Letra do Estado da carta (de 'A' a 'H'): \n");
    scanf(" %c", &estado1);

   printf("Digite o codigo da carta (ex:A01); \n");
   scanf("%s", CodigoCarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", NomeCidade1);

    printf("Digite a população da cidade: \n");
    scanf("%u", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &QuantPontosTuristicos1);

   DensidadePopulacional1 = populacao1 / area1;
    PIBperCapita1 = pib1 / populacao1;
    SuperPoder1 = populacao1 + area1 + pib1 + QuantPontosTuristicos1 - DensidadePopulacional1 + PIBperCapita1;

    printf("\n____Carta criada com Sucesso!____\n");



    printf("\n____Criação de carta numero 2____\n");

      printf("\n Digite a Letra do Estado da carta (de 'A' a 'H'): \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex:A01); \n");
    scanf("%s", CodigoCarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", NomeCidade2);

    printf("Digite a população da cidade: \n");
    scanf("%u", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &QuantPontosTuristicos2);

    DensidadePopulacional2 = populacao2 / area2;
    PIBperCapita2 = pib2 / populacao2;
    SuperPoder2 = populacao2 + area2 + pib2 + QuantPontosTuristicos2 - DensidadePopulacional2 + PIBperCapita2;
   

    printf("\n");
    printf("\n____Carta criada com Sucesso!____\n");
        


    Sleep(2000); // delay de 2 segundos para exibir a carta

    printf("\n____Carta 1____\n");
    printf("Estado: %c \n", estado1);
    printf("Codigo da carta: %s \n", CodigoCarta1);
    printf("Nome da cidade: %s \n", NomeCidade1);
    printf("População da cidade: %u \n", populacao1);
    printf("Área da cidade: %.2f km²\n", area1);
    printf("PIB da cidade: %.2f bilhoes de reais \n", pib1 / 1000000000);
    printf("Quantidade de pontos turisticos da cidade: %d \n", QuantPontosTuristicos1);
    printf("Densidade populacional: %.2f Hab/km² \n", DensidadePopulacional1);
    printf("PIB per capita: %.2f reais \n", PIBperCapita1);
    printf("Super poder da carta: %.2f \n", SuperPoder1);

    Sleep(5000); // delay de 5 segundos para exibir a proxima carta

    printf("\n____Carta 2____\n");
    printf("Estado: %c \n", estado2);
    printf("Codigo da carta: %s \n", CodigoCarta2);
    printf("Nome da cidade: %s \n", NomeCidade2);
    printf("População da cidade: %u \n", populacao2);
    printf("Área da cidade: %.2f km²\n", area2);
    printf("PIB da cidade: %.2f bilhoes de reais \n", pib2 / 1000000000);
    printf("Quantidade de pontos turisticos da cidade: %d \n", QuantPontosTuristicos2);
    printf("Densidade populacional: %.2f Hab/km² \n", DensidadePopulacional2);
    printf("PIB per capita: %.2f reais \n", PIBperCapita2);
    printf("Super poder da carta: %.2f \n", SuperPoder2);
   

    printf("\n____Comparação entre as cartas____\n");

   resultado = populacao1 > populacao2;
   printf("População da carta 1 é maior que a carta 2? %d \n", resultado);
   
   resultado = area1 > area2;
   printf("area da carta 1 é maior que a carta 2? %d \n", resultado);

   resultado = pib1 > pib2;
   printf("PIB da carta 1 é maior que a carta 2? %d \n", resultado);

   resultado = QuantPontosTuristicos1 > QuantPontosTuristicos2; 
   printf("Quantidade de pontos turisticos da carta 1 é maior que a carta 2? %d \n", resultado);

   resultado = DensidadePopulacional1 < DensidadePopulacional2;
    printf("Densidade populacional da carta 1 é menor que a carta 2? %d \n", resultado);

    resultado = PIBperCapita1 > PIBperCapita2;
    printf("PIB per capita da carta 1 é maior que a carta 2? %d \n", resultado);

    resultado = SuperPoder1 > SuperPoder2;
    printf("Super poder da carta 1 é maior que a carta 2? %d \n", resultado);



    Sleep(20000); // delay 20 segundos para finalizar em executaveis
    
}