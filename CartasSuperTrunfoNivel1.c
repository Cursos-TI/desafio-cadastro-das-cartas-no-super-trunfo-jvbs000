#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados da carta 1
    char numerodaCarta1[5], estado1, codigo1[4], nomeCidade1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    
    // Declaração das variáveis para armazenar os dados da carta 2
    char numerodaCarta2[5], estado2, codigo2[4], nomeCidade2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    
    // Entrada de dados para a carta 1
    printf("\nInsira os dados da carta 1\n");
    printf("Número da carta: ");
    scanf("%s", &numerodaCarta1);
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // Espaço antes de %c para evitar problemas com buffer
    printf("Código da carta: ");
    scanf("%s", &codigo1);
    printf("Nome da cidade: ");
    scanf("%s" , &nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    
    // Entrada de dados para a carta 2
    printf("\nInsira os dados da carta 2\n");
    printf("Número da carta: ");
    scanf("%s", &numerodaCarta2);
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da carta: ");
    scanf("%s", &codigo2);
    printf("Nome da cidade: ");
    scanf("%s", &nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    
    // Impressão dos dados da carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Número: %s\n", numerodaCarta1);
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.f km²\n", area1);
    printf("PIB: %.f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    
    // Impressão dos dados da carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Número: %s\n", numerodaCarta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.f km²\n", area2);
    printf("PIB: %.f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    
    return 0;
}

/*
Dados escolhidos da carta 1:
Estado: A
Código: A01
Nome da cidade: Pirapora
População: 55606
Área: 549.5 km²
PIB: 2.88 bilhões
Pontos turísticos: 5 
*/

/*
Dados escolhidos da carta 2:
Estado: B
Código: B01
Nome da cidade: Buritizeiro
População: 23910
Área: 7.226 km²
PIB: 0.736 bilhões
Pontos turísticos: 3
*/    
    



