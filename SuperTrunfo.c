#include <stdio.h>
#include <windows.h>

int main(){

    char estado1 = 'A', estado2 = 'B';
    char CodigoCarta1[4] = "A01";
    char CodigoCarta2[4] = "B01";
    char NomeCidade1[25] = "SaoPaulo";
    char NomeCidade2[25] = "RioDeJaneiro";
    unsigned int populacao1 = 12325000, populacao2 = 6748000;
    float area1 = 1521.11, area2 = 1200.25;
    float pib1 = 699280000000, pib2 = 300500000000;
    int QuantPontosTuristicos1 = 50, QuantPontosTuristicos2 = 30;
    float DensidadePopulacional1, DensidadePopulacional2;
    float PIBperCapita1, PIBperCapita2;
    float SuperPoder1, SuperPoder2;
    int resultado;

   /* printf("____Criação de carta numero 1____\n");
    
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
    scanf("%d", &QuantPontosTuristicos1); */

   DensidadePopulacional1 = populacao1 / area1;
    PIBperCapita1 = pib1 / populacao1;
    SuperPoder1 = populacao1 + area1 + pib1 + QuantPontosTuristicos1 - DensidadePopulacional1 + PIBperCapita1;

    printf("\n____Carta criada com Sucesso!____\n");



    printf("\n____Criação de carta numero 2____\n");
/*
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

    */

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
   
    int opcao;

    printf("\n ### Escolha o atributo de comparação ###\n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Quantidade de pontos turisticos \n");
    printf("5 - Densidade populacional \n");
    printf("6 - PIB per capita \n");
    printf("7 - Super poder \n");
    printf("Digite o numero do atributo escolhido: \n");
    scanf("%d \n", &opcao);
    

    switch (opcao)
    {
    case 1:

   if (populacao1 > populacao2)
   {
    printf("Cidades selecionados: Carta1: %s e carta2: %s \n", NomeCidade1, NomeCidade2);
    printf("Atributo selecionado para comparação: População\n");
    printf("Carta 1: %u habitantes \n Carta 2: %u habitantes \n", populacao1, populacao2);
    printf("Carta 1 tem mais população que a carta 2\n");
   }
   else if (populacao2 > populacao1)
   {
    printf("Cidades selecionados: Carta1: %s e carta2: %s \n", NomeCidade1, NomeCidade2);
    printf("Atributo selecionado para comparação: População\n");
    printf("Carta 1: %u habitantes \n Carta 2: %u habitantes \n", populacao1, populacao2);
    printf("Carta 2 tem mais população que a carta 1\n");
   }
   else
   {
    printf("Cidades selecionados: Carta1: %s e carta2: %s \n", NomeCidade1, NomeCidade2);
    printf("Atributo selecionado para comparação: População\n");
    printf("Carta 1: %u habitantes \n Carta 2: %u habitantes \n", populacao1, populacao2);
    printf("As cartas tem a mesma população\n");
   }
   
   break;

    case 2:


   if(area1 > area2)
   {
    printf("Cidades selecionados: Carta1: %s e carta2: %s \n", NomeCidade1, NomeCidade2);
    printf("Atributo selecionado para comparação: Área\n");
    printf("Carta 1: %.2f km² \n Carta 2: %.2f km² \n", area1, area2);
    printf("Carta 1 tem mais área que a carta 2 \n");
   }
   else if(area1 < area2)
   {
    printf("Cidades selecionados: Carta1: %s e carta2: %s \n", NomeCidade1, NomeCidade2);
    printf("Atributo selecionado para comparação: Área\n");
    printf("Carta 1: %.2f km² \n Carta 2: %.2f km² \n", area1, area2);
    printf("Carta 2 tem mais área que a carta 1 \n");
   }
   else
   { 
    printf("Cidades selecionados: Carta1: %s e carta2: %s \n", NomeCidade1, NomeCidade2);
    printf("Atributo selecionado para comparação: Área_\n");
    printf("Carta 1: %.2f km² \n Carta 2: %.2f km² \n", area1, area2);
    printf("As cartas tem a mesma área \n");
   }

    break;
  
      case 3:

   if (pib1 > pib2)
   {
    printf("Cidades selecionados: Carta1: %s e carta2: %s \n", NomeCidade1, NomeCidade2);
    printf("Atributo selecionado para comparação: PIB\n");
    printf("Carta 1: %.2f bilhoes de reais \n Carta 2: %.2f bilhoes de reais \n", pib1 / 1000000000, pib2 / 1000000000);
    printf("Carta 1 tem mais PIB que a carta 2 \n");
   }
   else if (pib1 < pib2)
   {
    printf("Cidades selecionados: Carta1: %s e carta2: %s \n", NomeCidade1, NomeCidade2);
    printf("Atributo selecionado para comparação: PIB\n");
    printf("Carta 1: %.2f bilhoes de reais \n Carta 2: %.2f bilhoes de reais \n", pib1 / 1000000000, pib2 / 1000000000);
    printf("Carta 2 tem mais PIB que a carta 1 \n");
   }
   else
   {
    printf("Cidades selecionados: Carta1: %s e carta2: %s \n", NomeCidade1, NomeCidade2);
    printf("Atributo selecionado para comparação: PIB\n");
    printf("Carta 1: %.2f bilhoes de reais \n Carta 2: %.2f bilhoes de reais \n", pib1 / 1000000000, pib2 / 1000000000);
    printf("As cartas tem o mesmo PIB \n");
   }

   break;

      case 4:
   

   if (QuantPontosTuristicos1 > QuantPontosTuristicos2)
   {
    
    printf("Cidades selecionados: Carta1: %s e carta2: %s \n", NomeCidade1, NomeCidade2);
    printf("Atributo selecionado para comparação: Quantidade de pontos turisticos\n");
    printf("Carta 1: %d pontos turisticos \n Carta 2: %d pontos turisticos \n", QuantPontosTuristicos1, QuantPontosTuristicos2);
    printf("Carta 1 tem mais pontos turisticos que a carta 2 \n");
   }
   else if (QuantPontosTuristicos1 < QuantPontosTuristicos2)
   {
    printf("Cidades selecionados: Carta1: %s e carta2: %s \n", NomeCidade1, NomeCidade2);
    printf("Atributo selecionado para comparação: Quantidade de pontos turisticos\n");
    printf("Carta 1: %d pontos turisticos \n Carta 2: %d pontos turisticos \n", QuantPontosTuristicos1, QuantPontosTuristicos2);
    printf("Carta 2 tem mais pontos turisticos que a carta 1 \n");
   }
   else
   {
    printf("Cidades selecionados: Carta1: %s e carta2: %s \n", NomeCidade1, NomeCidade2);
    printf("Atributo selecionado para comparação: Quantidade de pontos turisticos\n");
    printf("Carta 1: %d pontos turisticos \n Carta 2: %d pontos turisticos \n", QuantPontosTuristicos1, QuantPontosTuristicos2);
    printf("As cartas tem a mesma quantidade de pontos turisticos \n");
   }

    break;

      case 5:

   if (DensidadePopulacional1 < DensidadePopulacional2)
   {
    printf("Cidades selecionados: Carta1: %s e carta2: %s \n", NomeCidade1, NomeCidade2);
    printf("Atributo selecionado para comparação: Densidade populacional\n");
    printf("Carta 1: %.2f Hab/km² \n Carta 2: %.2f Hab/km² \n", DensidadePopulacional1, DensidadePopulacional2);
    printf("Carta 1 tem menor densidade populacional que a carta 2 \n");
   }
   else if (DensidadePopulacional1 > DensidadePopulacional2)
   {
    printf("Cidades selecionados: Carta1: %s e carta2: %s \n", NomeCidade1, NomeCidade2);
    printf("Atributo selecionado para comparação: Densidade populacional\n");
    printf("Carta 1: %.2f Hab/km² \n Carta 2: %.2f Hab/km² \n", DensidadePopulacional1, DensidadePopulacional2);
    printf("Carta 2 tem menor densidade populacional que a carta 1 \n");
   }
   else
   {
    printf("Cidades selecionados: Carta1: %s e carta2: %s \n", NomeCidade1, NomeCidade2);
    printf("Atributo selecionado para comparação: Densidade populacional\n");
    printf("Carta 1: %.2f Hab/km² \n Carta 2: %.2f Hab/km² \n", DensidadePopulacional1, DensidadePopulacional2);
    printf("As cartas tem a mesma densidade populacional \n");
   }
   
    break;

      case 6:

   if (PIBperCapita1 > PIBperCapita2)
   {
    printf("Cidades selecionados: Carta1: %s e carta2: %s \n", NomeCidade1, NomeCidade2);
    printf("Atributo selecionado para comparação: PIB per capita\n");
    printf("Carta 1: %.2f reais \n Carta 2: %.2f reais \n", PIBperCapita1, PIBperCapita2);
    printf("Carta 1 tem mais PIB per capita que a carta 2 \n");
   }
   else if (PIBperCapita1 < PIBperCapita2)
   {
    printf("Cidades selecionados: Carta1: %s e carta2: %s \n", NomeCidade1, NomeCidade2);
    printf("Atributo selecionado para comparação: PIB per capita\n");
    printf("Carta 1: %.2f reais \n Carta 2: %.2f reais \n", PIBperCapita1, PIBperCapita2);
    printf("Carta 2 tem mais PIB per capita que a carta 1 \n");
   }
   else
   {
    printf("Cidades selecionados: Carta1: %s e carta2: %s \n", NomeCidade1, NomeCidade2);
    printf("Atributo selecionado para comparação: PIB per capita\n");
    printf("Carta 1: %.2f reais \n Carta 2: %.2f reais \n", PIBperCapita1, PIBperCapita2);
    printf("As cartas tem o mesmo PIB per capita \n");
   }
   

    break;

      case 7:

   if (SuperPoder1 > SuperPoder2)
   {
    printf("Cidades selecionados: Carta1: %s e carta2: %s \n", NomeCidade1, NomeCidade2);
    printf("Atributo selecionado para comparação: Super poder\n");  
    printf("Carta 1: %.2f \n Carta 2: %.2f \n", SuperPoder1, SuperPoder2);
    printf("Carta 1 tem mais super poder que a carta 2 \n");
   }
   else if (SuperPoder1 < SuperPoder2)
   {
    printf("Cidades selecionados: Carta1: %s e carta2: %s \n", NomeCidade1, NomeCidade2);
    printf("Atributo selecionado para comparação: Super poder\n");  
    printf("Carta 1: %.2f \n Carta 2: %.2f \n", SuperPoder1, SuperPoder2);
    printf("Carta 2 tem mais super poder que a carta 1 \n");
   }
   else
   {
    printf("Cidades selecionados: Carta1: %s e carta2: %s \n", NomeCidade1, NomeCidade2);
    printf("Atributo selecionado para comparação: Super poder\n");
    printf("Carta 1: %.2f \n Carta 2: %.2f \n", SuperPoder1, SuperPoder2); 
    printf("As cartas tem o mesmo super poder \n");
   }

   break;

   default:
   printf("Digite um numero valido para escolher o atributo de comparação \n");
      break;
    }
   



    Sleep(7000); // delay 7 segundos para finalizar em executaveis
    
}