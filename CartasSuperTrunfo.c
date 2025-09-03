#include <stdio.h>
#include <string.h>
int main(){

    //===== CARTA 1 =====
    char estado = 'B';
    char codigo[5] = "B01";
    char cidade[20] = "Belo Horizonte";
    int populacao = 7000000;
    float area = 1314.10;
    float pib = 299.30;
    int pontosTuristicos = 20;

    printf("Digite os dados da carta 1: \n");

    printf("Informe o estado: ", estado);
    scanf("%c", &estado);

    printf("Informe o código: ", codigo);
    scanf("%s", &codigo);

    printf("Informe o nome da cidade: ", cidade);
    fgets(cidade, 20, stdin);

    printf("Informe a população: ", populacao);
    scanf("%d", &populacao);

    printf("Informe a Área: ", area);
    scanf("%f", &area);

    printf("Informe o PIB: ", pib);
    scanf("%f", &pib);

    printf("Informe a quantidade de pontos turísticos: ", pontosTuristicos);
    scanf("%d", &pontosTuristicos);



    //===== CARTA 2 =====
    char estado2 = 'C';
    char codigo2[5] = "C02";
    char cidade2[15] = "Fortaleza";
    int populacao2 = 750000;
    float area2 = 1120.15;
    float pib2 = 150.70;
    int pontosTuristicos2 = 13;

    printf("Digite os dados da carta 2: \n");

    printf("Informe o estado: ", estado2);
    scanf("%c", &estado2);

    printf("Informe o código: ", codigo2);
    scanf("%s", &codigo2);

    printf("Informe o nome da cidade: ", cidade2);
    fgets(cidade2, 20, stdin);

    printf("Informe a população: ", populacao2);
    scanf("%d", &populacao2);

    printf("Informe a Área: ", area2);
    scanf("%f", &area2);

    printf("Informe o PIB: ", pib2);
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turísticos: ", pontosTuristicos2);
    scanf("%d", &pontosTuristicos2);

    
    // = = EXIBINDO DADOS DA CARTA 1 = =
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

    // = = EXIBINDO DADOS DA CARTA 2 = =
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}