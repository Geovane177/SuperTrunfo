#include <stdio.h>
#include <windows.h>

int main(){

    char estado1, estado2;
    char CodigoCarta1[4];
    char CodigoCarta2[4];
    char NomeCidade1[25];
    char NomeCidade2[25];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int QuantPontosTuristicos1, QuantPontosTuristicos2;
    float DensidadePopulacional1, DensidadePopulacional2;
    float PIBperCapita1, PIBperCapita2;


    printf("____Criação de carta numero 1____\n");
    
    printf("\n Digite a Letra do Estado da carta (de 'A' a 'H'): \n");
    scanf(" %c", &estado1);

   printf("Digite o codigo da carta (ex:A01); \n");
   scanf("%s", CodigoCarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", NomeCidade1);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &QuantPontosTuristicos1);

   DensidadePopulacional1 = populacao1 / area1;
    PIBperCapita1 = pib1 / populacao1;

    printf("\n____Carta criada com Sucesso!____\n");



    printf("\n____Criação de carta numero 2____\n");

      printf("\n Digite a Letra do Estado da carta (de 'A' a 'H'): \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex:A01); \n");
    scanf("%s", CodigoCarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", NomeCidade2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &QuantPontosTuristicos2);

    DensidadePopulacional2 = populacao2 / area2;
    PIBperCapita2 = pib2 / populacao2;
   

    printf("\n");
    printf("\n____Carta criada com Sucesso!____\n");
        


    Sleep(2000); // delay de 2 segundos para exibir a carta

    printf("\n____Carta 1____\n");
    printf("Estado: %c \n", estado1);
    printf("Codigo da carta: %s \n", CodigoCarta1);
    printf("Nome da cidade: %s \n", NomeCidade1);
    printf("População da cidade: %d \n", populacao1);
    printf("Área da cidade: %.2f km²\n", area1);
    printf("PIB da cidade: %.2f bilhoes de reais \n", pib1 / 1000000000);
    printf("Quantidade de pontos turisticos da cidade: %d \n", QuantPontosTuristicos1);
    printf("Densidade populacional: %.2f Hab/km² \n", DensidadePopulacional1);
    printf("PIB per capita: %.2f reais \n", PIBperCapita1);

    Sleep(5000); // delay de 5 segundos para exibir a proxima carta

    printf("\n____Carta 2____\n");
    printf("Estado: %c \n", estado2);
    printf("Codigo da carta: %s \n", CodigoCarta2);
    printf("Nome da cidade: %s \n", NomeCidade2);
    printf("População da cidade: %d \n", populacao2);
    printf("Área da cidade: %.2f km²\n", area2);
    printf("PIB da cidade: %.2f bilhoes de reais \n", pib2 / 1000000000);
    printf("Quantidade de pontos turisticos da cidade: %d \n", QuantPontosTuristicos2);
    printf("Densidade populacional: %.2f Hab/km² \n", DensidadePopulacional2);
    printf("PIB per capita: %.2f reais \n", PIBperCapita2);

    printf("Tudo meu geovane");
    

}