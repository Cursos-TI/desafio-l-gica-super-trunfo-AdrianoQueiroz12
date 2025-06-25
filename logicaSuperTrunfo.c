#include <stdio.h>

int main() {
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

    densidadeB = populacaoB / areaB;
    pibPerCapitaB = pibB / populacaoB;

    int escolha;
    printf("\nEscolha o atributo para comparar as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    // Comparação com base no atributo escolhido
    switch (escolha) {
        case 1:
            printf("\nComparando População:\n");
            printf("Carta 1 - %s (%s): %lu\n", cidadeA, estadoA, populacaoA);
            printf("Carta 2 - %s (%s): %lu\n", cidadeB, estadoB, populacaoB);
            if (populacaoA > populacaoB) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidadeA);
            } else if (populacaoB > populacaoA) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidadeB);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("\nComparando Área:\n");
            printf("Carta 1 - %s (%s): %.2f km²\n", cidadeA, estadoA, areaA);
            printf("Carta 2 - %s (%s): %.2f km²\n", cidadeB, estadoB, areaB);
            if (areaA > areaB) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidadeA);
            } else if (areaB > areaA) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidadeB);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("\nComparando PIB:\n");
            printf("Carta 1 - %s (%s): %.2f bilhões\n", cidadeA, estadoA, pibA);
            printf("Carta 2 - %s (%s): %.2f bilhões\n", cidadeB, estadoB, pibB);
            if (pibA > pibB) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidadeA);
            } else if (pibB > pibA) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidadeB);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("\nComparando Pontos Turísticos:\n");
            printf("Carta 1 - %s (%s): %d\n", cidadeA, estadoA, pontosTuristicosA);
            printf("Carta 2 - %s (%s): %d\n", cidadeB, estadoB, pontosTuristicosB);
            if (pontosTuristicosA > pontosTuristicosB) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidadeA);
            } else if (pontosTuristicosB > pontosTuristicosA) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidadeB);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("\nComparando Densidade Populacional:\n");
            printf("Carta 1 - %s (%s): %.2f habitantes/km²\n", cidadeA, estadoA, densidadeA);
            printf("Carta 2 - %s (%s): %.2f habitantes/km²\n", cidadeB, estadoB, densidadeB);
            if (densidadeA < densidadeB) { // Regra invertida para Densidade Populacional
                printf("Resultado: Carta 1 (%s) venceu!\n", cidadeA);
            } else if (densidadeB < densidadeA) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidadeB);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}