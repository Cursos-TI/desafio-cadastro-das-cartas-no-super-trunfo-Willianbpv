#include <stdio.h>

int main(){
    char estado;
    char codigodacarta[10];
    char nomedacidade[20];
    int populacao;
    float area;
    float pib;
    int numerodepontosturisticos;

    printf("escolha o estado da carta escrevendo somente a letra inicial dela:");
    scanf(" %c", &estado);

    printf("escolha um codigo para essa carta com uma letra e em seguida por um ou dois numeros:");
    scanf(" %s", codigodacarta);

    printf("escreva o nome de uma cidade que tenha neste estado com apenas uma palavra:");
    scanf(" %s", nomedacidade);

    printf("digite qual e a população que você acha que tem essa cidade, não precisa ser o numero exato:");
    scanf(" %d", &populacao);

    printf("digite o tamanho que você acha que tem essa cidade em km², não precisa ser o numero exato:");
    scanf(" %f", &area);

    printf("digite o pib dessa cidade, o pib e o lucro desta cidade:");
    scanf(" %f", &pib);

    printf("digite o numero de pontos turisticos que você acha que tem essa cidade:");
    scanf(" %d", &numerodepontosturisticos);

    printf("\n");


    char lestado;
    char lcodigodacarta[10];
    char lnomedacidade[20];
    int lpopulacao;
    float larea;
    float lpib;
    int lnumerodepontosturisticos;

    printf("escolha estado para a segunda carta escrevendo somente a letra inicial dela:");
    scanf(" %c", &lestado);

    printf("escolha um codigo para a segunda  carta com uma letra e em seguida por um ou dois numeros:");
    scanf(" %s", lcodigodacarta);

    printf("escreva para a segunda carta um nome de uma cidade que tenha neste estado com apenas uma palavra:");
    scanf(" %s", lnomedacidade);

    printf("digite para a segunda carta qual e a população que você acha que tem essa cidade, não precisa ser o numero exato:");
    scanf(" %d", &lpopulacao);

    printf("digite para a segunda carta o tamanho que você acha que tem essa cidade em km², não precisa ser o numero exato:");
    scanf(" %f", &larea);

    printf("digite para a segunda carta o pib dessa cidade, o pib e o lucro desta cidade:");
    scanf(" %f", &lpib);

    printf("digite para a segunda carta o numero de pontos turisticos que você acha que tem essa cidade:");
    scanf(" %d", &lnumerodepontosturisticos);

    printf("\n");

    printf("\n-carta 1A-\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigodacarta);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f \n", pib);
    printf("Numero de pontos turisticos: %d\n", numerodepontosturisticos);
    printf("\n");


    printf("\n-carta 2A-\n");
    printf("Estado: %c\n", lestado);
    printf("Codigo: %s\n", lcodigodacarta);
    printf("Nome da cidade: %s\n", lnomedacidade);
    printf("Populacao: %d\n", lpopulacao);
    printf("Area: %.2f km²\n", larea);
    printf("PIB: %.2f \n", lpib);
    printf("Numero de pontos turisticos: %d\n", lnumerodepontosturisticos);
    printf("\n");

    return 0;
}

