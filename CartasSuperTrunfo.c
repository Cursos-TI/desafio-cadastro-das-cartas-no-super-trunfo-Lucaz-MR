#include <stdio.h>
#include <string.h>

int main()
{
// Primeira Carta
    char carta [10] = ("CARTA 1");
    char estado = 'A';
    char codigo [5] = ("A01");
    char cidade [20] = ("Belo Horizonte");
    int populacao = 2900000;
    float area = 1550.90;
    float pib = 750.355;
    int pontosTuristicos = 40;

//  Dados da primeira carta

    printf("Digite o número da sua carta: "); 
    fgets(carta, 10, stdin);

    printf("Carta 1 \n");

    printf("Estado: %c\n" ,estado); 
    scanf("%c" ,&estado);
    
    printf("Código da carta: %s\n" ,codigo); 
    scanf("%s" ,&codigo);
    
    printf("Nome da cidade: %s\n" ,cidade); 
    fgets(cidade, 20, stdin);

    printf("População: %d\n" ,populacao); 
    scanf("%d", &populacao);

    printf("Área: %f\n" ,area); 
    scanf("%f" ,&area);
    
    printf("PIB: %.2f\n" ,pib); 
    scanf("%f" ,&pib);
    
    printf("Pontos turísticos: %d\n" ,pontosTuristicos); 
    scanf("%d" ,&pontosTuristicos);



// Segunda Carta
    char carta2 [10] = ("CARTA 2");
    char estado2 = 'B';
    char codigo2 [4] = "B02";
    char cidade2 [15] = ("Fortaleza");
    int populacao2 = 1060000;
    float area2 = 4350.65;
    float pib2 = 130.780;
    int pontosTuristicos2 = 17;

//  Dados da segunda carta

    printf("Digite o número da sua carta: ");

    printf("Carta 2 \n"); 
    fgets(carta2, 10, stdin);
    
    printf("Estado: %c\n" ,estado2); 
    scanf("%c" ,&estado2);

    printf("Código da carta: %s\n" ,codigo2); 
    scanf("%s" ,&codigo2);
    
    printf("Nome da cidade: %s\n" ,cidade2); 
    fgets(cidade2, 15, stdin);

    printf("População: %d\n" ,populacao2); 
    scanf("%d", &populacao2);

    printf("Área: %.2f\n" ,area2); 
    scanf("%f" ,&area2);
    
    printf("PIB: %.2f\n" ,pib2); 
    scanf("%f" ,&pib2);
    
    printf("Pontos turísticos: %d\n" ,pontosTuristicos2); 
    scanf("%d" ,&pontosTuristicos2);


    return 0;
}