#include <stdio.h>

// Estrutura para armazenar dados das cartas
typedef struct {
    char numerodaCarta[5];
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} CartaSuperTrunfo;

// Função para coletar os dados da carta
void coletarDados(CartaSuperTrunfo *carta, int numero) {
    printf("\nInsira os dados da carta %d\n", numero);

    printf("Número da carta: ");
    scanf("%4s", carta->numerodaCarta);  // Limitando entrada para evitar buffer overflow

    printf("Estado (A-H): ");
    scanf(" %c", &carta->estado);  // O espaço antes do %c consome o caractere de nova linha pendente

    printf("Código da carta: ");
    scanf("%3s", carta->codigo);

    printf("Nome da cidade: ");
    scanf("%s", carta->nomeCidade);  // Lê até 49 caracteres incluindo espaços

    printf("População: ");
    scanf("%d", &carta->populacao);

    printf("Área (km²): ");
    scanf("%f", &carta->area);

    printf("PIB: ");
    scanf("%f", &carta->pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

// Função para exibir os dados da carta
void exibirCarta(CartaSuperTrunfo carta, int numero) {
    printf("\n--- Carta %d ---\n", numero);
    printf("Número: %s\n", carta.numerodaCarta);
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
}

int main() {
    CartaSuperTrunfo carta1, carta2;

    coletarDados(&carta1, 1);
    coletarDados(&carta2, 2);

    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    return 0;
}
