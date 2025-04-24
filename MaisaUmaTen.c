#include <stdio.h>

int main(){   //Países// 

    //Primeira Carta.

    int populacao1;
    float area1; 
    float pib1;
    int pontosTuristicos1;

    //Segunda Carta.

    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    //Entrada de dados da primeira carta.
    printf("Cadastro da Primeira Carta:\n");
    printf("Código da carta (ex: A01): ");
    scanf("%d", &populacao1);
    printf("População: ");
    printf("Área (em km): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turíscos: ");
    scanf("%d", &pontosTuristicos1);

    //Entrada de dados da segunda carta.
    printf("Cadastro da Segunda Carta:\n");
    printf("Código da carta (ex: A02): ");
    scanf("%d", &populacao2);
    printf("População ");
    printf("Área (em km): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    return 0;

}

    