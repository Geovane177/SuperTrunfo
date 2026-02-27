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
   
    Sleep(5000); // delay de 5 segundos para exibir a comparação entre as cartas
   

   if (populacao1 > populacao2)
   {
    printf("\n____Comparação entre as cartas: População____\n");
    printf("Carta 1: %u habitantes \n Carta 2: %u habitantes \n", populacao1, populacao2);
    printf("Carta 1 tem mais população que a carta 2\n");
   }
   else if (populacao2 > populacao1)
   {
    printf("\n____Comparação entre as cartas: População____\n");
    printf("Carta 1: %u habitantes \n Carta 2: %u habitantes \n", populacao1, populacao2);
    printf("Carta 2 tem mais população que a carta 1\n");
   }
   else
   {
    printf("\n____Comparação entre as cartas: População____\n");
    printf("Carta 1: %u habitantes \n Carta 2: %u habitantes \n", populacao1, populacao2);
    printf("As cartas tem a mesma população\n");
   }
   
   Sleep(1500); // delay de 1.5 segundos para exibir a proxima comparação

   if(area1 > area2)
   {
    printf("\n____Comparação entre as cartas: Área____\n");
    printf("Carta 1: %.2f km² \n Carta 2: %.2f km² \n", area1, area2);
    printf("Carta 1 tem mais área que a carta 2 \n");
   }
   else if(area1 < area2)
   {
    printf("\n____Comparação entre as cartas: Área____\n");
    printf("Carta 1: %.2f km² \n Carta 2: %.2f km² \n", area1, area2);
    printf("Carta 2 tem mais área que a carta 1 \n");
   }
   else
   { 
    printf("\n____Comparação entre as cartas: Área____\n");
    printf("Carta 1: %.2f km² \n Carta 2: %.2f km² \n", area1, area2);
    printf("As cartas tem a mesma área \n");
   }

    Sleep(1500); // delay de 1.5 segundos para exibir a proxima comparação

   if (pib1 > pib2)
   {
    printf("\n____Comparação entre as cartas: PIB____\n");
    printf("Carta 1: %.2f bilhoes de reais \n Carta 2: %.2f bilhoes de reais \n", pib1 / 1000000000, pib2 / 1000000000);
    printf("Carta 1 tem mais PIB que a carta 2 \n");
   }
   else if (pib1 < pib2)
   {
    printf("\n____Comparação entre as cartas: PIB____\n");
    printf("Carta 1: %.2f bilhoes de reais \n Carta 2: %.2f bilhoes de reais \n", pib1 / 1000000000, pib2 / 1000000000);
    printf("Carta 2 tem mais PIB que a carta 1 \n");
   }
   else
   {
    printf("\n____Comparação entre as cartas: PIB____\n");
    printf("Carta 1: %.2f bilhoes de reais \n Carta 2: %.2f bilhoes de reais \n", pib1 / 1000000000, pib2 / 1000000000);
    printf("As cartas tem o mesmo PIB \n");
   }

    Sleep(1500); // delay de 1.5 segundos para exibir a proxima comparação
   

   if (QuantPontosTuristicos1 > QuantPontosTuristicos2)
   {
    printf("\n____Comparação entre as cartas: Quantidade de pontos turisticos____\n");
    printf("Carta 1: %d pontos turisticos \n Carta 2: %d pontos turisticos \n", QuantPontosTuristicos1, QuantPontosTuristicos2);
    printf("Carta 1 tem mais pontos turisticos que a carta 2 \n");
   }
   else if (QuantPontosTuristicos1 < QuantPontosTuristicos2)
   {
    printf("\n____Comparação entre as cartas: Quantidade de pontos turisticos____\n");
    printf("Carta 1: %d pontos turisticos \n Carta 2: %d pontos turisticos \n", QuantPontosTuristicos1, QuantPontosTuristicos2);
    printf("Carta 2 tem mais pontos turisticos que a carta 1 \n");
   }
   else
   {
    printf("\n____Comparação entre as cartas: Quantidade de pontos turisticos____\n");
    printf("Carta 1: %d pontos turisticos \n Carta 2: %d pontos turisticos \n", QuantPontosTuristicos1, QuantPontosTuristicos2);
    printf("As cartas tem a mesma quantidade de pontos turisticos \n");
   }

      Sleep(1500); // delay de 1.5 segundos para exibir a proxima comparação

   if (DensidadePopulacional1 < DensidadePopulacional2)
   {
    printf("\n____Comparação entre as cartas: Densidade populacional____\n");
    printf("Carta 1: %.2f Hab/km² \n Carta 2: %.2f Hab/km² \n", DensidadePopulacional1, DensidadePopulacional2);
    printf("Carta 1 tem menor densidade populacional que a carta 2 \n");
   }
   else if (DensidadePopulacional1 > DensidadePopulacional2)
   {
    printf("\n____Comparação entre as cartas: Densidade populacional____\n");
    printf("Carta 1: %.2f Hab/km² \n Carta 2: %.2f Hab/km² \n", DensidadePopulacional1, DensidadePopulacional2);
    printf("Carta 2 tem menor densidade populacional que a carta 1 \n");
   }
   else
   {
    printf("\n____Comparação entre as cartas: Densidade populacional____\n");
    printf("Carta 1: %.2f Hab/km² \n Carta 2: %.2f Hab/km² \n", DensidadePopulacional1, DensidadePopulacional2);
    printf("As cartas tem a mesma densidade populacional \n");
   }
   
    Sleep(1500); // delay de 1.5 segundos para exibir a proxima comparação

   if (PIBperCapita1 > PIBperCapita2)
   {
    printf("\n____Comparação entre as cartas: PIB per capita____\n");
    printf("Carta 1: %.2f reais \n Carta 2: %.2f reais \n", PIBperCapita1, PIBperCapita2);
    printf("Carta 1 tem mais PIB per capita que a carta 2 \n");
   }
   else if (PIBperCapita1 < PIBperCapita2)
   {
    printf("\n____Comparação entre as cartas: PIB per capita____\n");
    printf("Carta 1: %.2f reais \n Carta 2: %.2f reais \n", PIBperCapita1, PIBperCapita2);
    printf("Carta 2 tem mais PIB per capita que a carta 1 \n");
   }
   else
   {
    printf("\n____Comparação entre as cartas: PIB per capita____\n");
    printf("Carta 1: %.2f reais \n Carta 2: %.2f reais \n", PIBperCapita1, PIBperCapita2);
    printf("As cartas tem o mesmo PIB per capita \n");
   }
   
    Sleep(1500); // delay de 1.5 segundos para exibir a proxima comparação

   if (SuperPoder1 > SuperPoder2)
   {
    printf("\n____Comparação entre as cartas: Super poder____\n");
    printf("Carta 1: %.2f \n Carta 2: %.2f \n", SuperPoder1, SuperPoder2);
    printf("Carta 1 tem mais super poder que a carta 2 \n");
   }
   else if (SuperPoder1 < SuperPoder2)
   {
    printf("\n____Comparação entre as cartas: Super poder____\n");
    printf("Carta 1: %.2f \n Carta 2: %.2f \n", SuperPoder1, SuperPoder2);
    printf("Carta 2 tem mais super poder que a carta 1 \n");
   }
   else
   {
    printf("\n____Comparação entre as cartas: Super poder____\n");
    printf("Carta 1: %.2f \n Carta 2: %.2f \n", SuperPoder1, SuperPoder2); 
    printf("As cartas tem o mesmo super poder \n");
   }
   



    Sleep(20000); // delay 20 segundos para finalizar em executaveis
    
}