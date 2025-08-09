#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    // ===== Cadastro da Carta 1 =====
    char estado1[30];
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;
    float densidade1, pibPerCapita1;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (ex: SAO PAULO): ");
    scanf(" %s", estado1);
    printf("Codigo da carta: ");
    scanf(" %s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Populacao: ");
    scanf(" %d", &populacao1);
    printf("Area (km²): ");
    scanf(" %f", &area1);
    printf("PIB (em bilhoes de reais): ");
    scanf(" %f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // ===== Cadastro da Carta 2 =====
    char estado2[30];
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;
    float densidade2, pibPerCapita2;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (ex: CEARA): ");
    scanf(" %s", estado2);
    printf("Codigo da carta: ");
    scanf(" %s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Populacao: ");
    scanf(" %d", &populacao2);
    printf("Area (km²): ");
    scanf(" %f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf(" %f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // ===== Comparações =====
    printf("\n=== Comparacao de Cartas ===\n");

    // População
    printf("\nPopulacao:\n");
    printf("Carta 1 - %s (%s): %d\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", nomeCidade2, estado2, populacao2);
    if (populacao1 > populacao2)
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    else if (populacao2 > populacao1)
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    else
        printf("Resultado: Empate!\n");

    // Área
    printf("\nArea:\n");
    printf("Carta 1 - %s (%s): %.2f km²\n", nomeCidade1, estado1, area1);
    printf("Carta 2 - %s (%s): %.2f km²\n", nomeCidade2, estado2, area2);
    if (area1 > area2)
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    else if (area2 > area1)
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    else
        printf("Resultado: Empate!\n");

    // PIB
    printf("\nPIB:\n");
    printf("Carta 1 - %s (%s): %.2f bilhoes\n", nomeCidade1, estado1, pib1);
    printf("Carta 2 - %s (%s): %.2f bilhoes\n", nomeCidade2, estado2, pib2);
    if (pib1 > pib2)
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    else if (pib2 > pib1)
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    else
        printf("Resultado: Empate!\n");

    // Densidade Populacional (menor vence)
    printf("\nDensidade Populacional:\n");
    printf("Carta 1 - %s (%s): %.2f hab/km²\n", nomeCidade1, estado1, densidade1);
    printf("Carta 2 - %s (%s): %.2f hab/km²\n", nomeCidade2, estado2, densidade2);
    if (densidade1 < densidade2)
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    else if (densidade2 < densidade1)
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    else
        printf("Resultado: Empate!\n");

    // PIB per Capita
    printf("\nPIB per Capita:\n");
    printf("Carta 1 - %s (%s): %.2f reais\n", nomeCidade1, estado1, pibPerCapita1);
    printf("Carta 2 - %s (%s): %.2f reais\n", nomeCidade2, estado2, pibPerCapita2);
    if (pibPerCapita1 > pibPerCapita2)
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    else if (pibPerCapita2 > pibPerCapita1)
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    else
        printf("Resultado: Empate!\n");


    return 0;
}
