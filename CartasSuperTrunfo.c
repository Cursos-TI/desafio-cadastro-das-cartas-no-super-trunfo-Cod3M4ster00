#include <stdio.h>

int main() {
    // Variáveis para armazenar dados da cidade
    char estado;
    char codigo[5];
    char nomeCidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    
    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado);
    printf("Código: ");
    scanf("%s", codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", nomeCidade);
    printf("População: ");
    scanf("%lu", &populacao);
    printf("Área (em km²): ");
    scanf("%f", &area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);
    
    float densidade = populacao / area;
    float pibPerCapita = (pib * 1000000000) / populacao;
    float superPoder = (float)populacao + area + (pib * 1000000000) + pontosTuristicos + pibPerCapita + (1 / densidade);

    // Exibição dos dados da Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);
    printf("Super Poder: %.2f\n\n", superPoder);

    // Leitura dos dados da Carta 2
    printf("Digite os dados da Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado);
    printf("Código: ");
    scanf("%s", codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", nomeCidade);
    printf("População: ");
    scanf("%lu", &populacao);
    printf("Área (em km²): ");
    scanf("%f", &area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);

    densidade = populacao / area;
    pibPerCapita = (pib * 1000000000) / populacao;
    superPoder = (float)populacao + area + (pib * 1000000000) + pontosTuristicos + pibPerCapita + (1 / densidade);

    // Exibição dos dados da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);
    printf("Super Poder: %.2f\n\n", superPoder);

    // Comparações
    printf("--- Comparação de Cartas ---\n");
    printf("População: Carta 1 venceu (%d)\n", populacao > populacao);
    printf("Área: Carta 1 venceu (%d)\n", area > area);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos > pontosTuristicos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade < densidade); // MENOR vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita > pibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder > superPoder);

    return 0;
}
