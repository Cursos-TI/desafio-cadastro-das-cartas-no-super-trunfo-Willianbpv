#include <stdio.h>

int main(){
    char estado;
    char codigodacarta[10];
    char nomedacidade[20];
    int populacao;
    float area;
    float pib;
    int numerodepontosturisticos;
    float densidadepopulacional;
    float pibpercapita;
    float superpoder;
    double resultadopopulacao;
    double resultadoarea;
    double resultadopib;
    double resultadonumerodepontosturisticos;
    double resultadodensidadepopulacional;
    double resultadopibpercapita;
    double resultadosuperpoder;
    
    printf("escolha o estado da carta escrevendo somente a letra inicial dela:");
    scanf(" %c", &estado);

    printf("escolha um codigo para essa carta com uma letra e em seguida por um ou dois numeros:");
    scanf(" %s", codigodacarta);

    printf("escreva o nome de uma cidade que tenha neste estado com apenas uma palavra:");
    scanf(" %s", nomedacidade);

    printf("digite qual e a população que você acha que tem essa cidade com somente numeros, não precisa ser o numero exato:");
    scanf(" %d", &populacao);

    printf("digite o tamanho que você acha que tem essa cidade em km² com somente numeros, não precisa ser o numero exato:");
    scanf(" %f", &area);

    printf("digite o pib dessa cidade com somente numeros com somente numeros, o pib e o lucro desta cidade:");
    scanf(" %f", &pib);

    printf("digite o numero de pontos turisticos que você acha que tem essa cidade:");
    scanf(" %d", &numerodepontosturisticos);

    printf("\n");

    densidadepopulacional = populacao / area;
    pibpercapita = pib / populacao;
    superpoder = populacao + area + pib + pibpercapita + (1/ densidadepopulacional) + numerodepontosturisticos;
    
    resultadopopulacao = populacao;
    resultadoarea = area;
    resultadopib = pib;
    resultadonumerodepontosturisticos = numerodepontosturisticos;
    resultadodensidadepopulacional = densidadepopulacional;
    resultadopibpercapita = pibpercapita;
    resultadosuperpoder = superpoder;

    printf("\n");

    char lestado;
    char lcodigodacarta[10];
    char lnomedacidade[20];
    int lpopulacao;
    float larea;
    float lpib;
    int lnumerodepontosturisticos;
    float ldensidadepopulacional;
    float lpibpercapita;
    float lsuperpoder;
    double resultadolpopulacao;
    double resultadolarea;
    double resultadolpib;
    double resultadolnumerodepontosturisticos;
    double resultadoldensidadepopulacional;
    double resultadolpibpercapita;
    double resultadolsuperpoder;
    
    printf("escolha para a segunda carta o estado escrevendo somente a letra inicial dela:");
    scanf(" %c", &lestado);

    printf("escolha para a segunda carta um codigo com uma letra e em seguida por um ou dois numeros:");
    scanf(" %s", lcodigodacarta);

    printf("escreva para a segunda carta o nome de uma cidade que tenha neste estado com apenas uma palavra:");
    scanf(" %s", lnomedacidade);

    printf("digite para a segunda carta qual e a população que você acha que tem essa cidade com somente numeros, não precisa ser o numero exato:");
    scanf(" %d", &lpopulacao);

    printf("digite para a segunda carta o tamanho que você acha que tem essa cidade em km² com somente numeros, não precisa ser o numero exato:");
    scanf(" %f", &larea);

    printf("digite para a segunda carta o pib dessa cidade com somente numeros, o pib e o lucro desta cidade:");
    scanf(" %f", &lpib);

    printf("digite para a segunda carta o numero de pontos turisticos que você acha que tem essa cidade:");
    scanf(" %d", &lnumerodepontosturisticos);

    printf("\n");

    ldensidadepopulacional = lpopulacao / larea;
    lpibpercapita = lpib / lpopulacao;
    lsuperpoder = lpopulacao + larea + lpib + lpibpercapita + (1/ ldensidadepopulacional) + lnumerodepontosturisticos;

        
    resultadolpopulacao = lpopulacao;
    resultadolarea = larea;
    resultadolpib = lpib;
    resultadolnumerodepontosturisticos = lnumerodepontosturisticos;
    resultadoldensidadepopulacional = ldensidadepopulacional;
    resultadolpibpercapita = lpibpercapita;
    resultadolsuperpoder = lsuperpoder;

    int resultadodeWpopulacao;
    int resultadodeWarea;
    int resultadodeWpib;
    int resultadodeWpontosturisticos;
    int resultadodeWdensidadepopulacional;
    int resultadodeWpibpercapita;
    int resultadodeWsuperpoder;


    printf("\n");

    printf("\n-carta A-\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigodacarta);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Numero de pontos turisticos: %d\n", numerodepontosturisticos);
    printf("o numero de densidade populacional é: %.2f hab/km²\n", densidadepopulacional);
    printf("o numero de pib per capita é: %.2f reais\n", pibpercapita);
    printf("O super poder é: %.2f\n", superpoder);
    printf("\n");

    printf("\n-carta B-\n");
    printf("Estado: %c\n", lestado);
    printf("Codigo: %s\n", lcodigodacarta);
    printf("Nome da cidade: %s\n", lnomedacidade);
    printf("Populacao: %d\n", lpopulacao);
    printf("Area: %.2f km²\n", larea);
    printf("PIB: %.2f bilhões de reais\n", lpib);
    printf("Numero de pontos turisticos: %d\n", lnumerodepontosturisticos);
    printf("o numero de densidade populacional é: %.2f hab/km²\n", ldensidadepopulacional);
    printf("o numero de pib per capita é: %.2f reais\n", lpibpercapita);
    printf("O super poder é: %.2f\n", lsuperpoder);
    printf("\n");

    resultadodeWpopulacao = populacao > lpopulacao;
    resultadodeWarea = area > larea;
    resultadodeWpib = pib > lpib;
    resultadodeWpontosturisticos = numerodepontosturisticos > lnumerodepontosturisticos;
    resultadodeWdensidadepopulacional = densidadepopulacional < ldensidadepopulacional;
    resultadodeWpibpercapita = pibpercapita > lpibpercapita;
    resultadodeWsuperpoder = superpoder > lsuperpoder;

    printf("\n");
    printf("se o resultado for "0" a carta A ganhou se for "1" a carta B ganhou");
    printf("\n");

    printf("resultado de população é: %d\n", resultadodeWpopulacao);
    printf("resultado de area é: %d\n", resultadodeWarea);
    printf("resultado de pib é: %d\n", resultadodeWpib);
    printf("resultado de pontos turisticos é: %d\n", resultadodeWpontosturisticos);
    printf("resultado de densidade populacional é: %d\n", resultadodeWdensidadepopulacional);
    printf("resultado de pibpercapita é: %d\n", resultadodeWpibpercapita);
    printf("resultado de super poder é: %d\n", resultadodeWsuperpoder);
    
    printf("\n");

    return 0;
}