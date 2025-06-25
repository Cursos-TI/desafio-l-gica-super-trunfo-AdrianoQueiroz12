#include <stdio.h>

int main() {
    // Declaração das variáveis para os dados das cartas
    char estadoA[50], estadoB[50];
    char codigoA[5], codigoB[5];
    char cidadeA[100], cidadeB[100];
    unsigned long int populacaoA, populacaoB;
    float areaA, areaB, pibA, pibB;
    int pontosTuristicosA, pontosTuristicosB;
    float densidadeA, densidadeB, pibPerCapitaA, pibPerCapitaB;

    // Recebendo os dados da carta A
    printf("Digite as informações da carta A:\n");
    printf("Estado: ");
    scanf(" %s", estadoA);
    printf("Código da carta (A01 – A10): ");
    scanf(" %s", codigoA);
    printf("Nome da cidade: ");
    scanf(" %s", cidadeA);
    printf("População: ");
    scanf("%lu", &populacaoA);
    printf("Área (em km²): ");
    scanf("%f", &areaA);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pibA);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosA);

    // Calculando a Densidade Populacional e PIB per Capita para a carta A
    densidadeA = populacaoA / areaA;
    pibPerCapitaA = pibA / populacaoA;

    // Recebendo os dados da carta B
    printf("\nDigite as informações da carta B:\n");
    printf("Estado: ");
    scanf(" %s", estadoB);
    printf("Código da carta (A01 – A10): ");
    scanf(" %s", codigoB);
    printf("Nome da cidade: ");
    scanf(" %s", cidadeB);
    printf("População: ");
    scanf("%lu", &populacaoB);
    printf("Área (em km²): ");
    scanf("%f", &areaB);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pibB);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosB);

    // Calculando a Densidade Populacional e PIB per Capita para a carta B
    densidadeB = populacaoB / areaB;
    pibPerCapitaB = pibB / populacaoB;

    // Atributo para comparação escolhido (exemplo: População)
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %lu\n", cidadeA, estadoA, populacaoA);
    printf("Carta 2 - %s (%s): %lu\n", cidadeB, estadoB, populacaoB);

    // Determinando a carta vencedora com base no atributo escolhido
    if (populacaoA > populacaoB) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidadeA);
    } else if (populacaoB > populacaoA) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidadeB);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}