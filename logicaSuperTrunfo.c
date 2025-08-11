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
    char estado1[50], estado2[50];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Cadastro da primeira carta
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado1);
    printf("Codigo da carta: ");
    scanf(" %[^\n]", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Cadastro da segunda carta
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Codigo da carta: ");
    scanf(" %[^\n]", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos automáticos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = pib1 * 1000000000 / populacao1;
    pibPerCapita2 = pib2 * 1000000000 / populacao2;

    int opcao;
    printf("\n=== Menu de Comparacao ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("6 - PIB per capita\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("\n=== Resultado da Comparacao ===\n");

    switch(opcao) {
        case 1:
            printf("Comparando Populacao:\n");
            printf("%s: %d\n", cidade1, populacao1);
            printf("%s: %d\n", cidade2, populacao2);
            if(populacao1 > populacao2)
                printf("Vencedor: %s\n", cidade1);
            else if(populacao2 > populacao1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Comparando Area:\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            if(area1 > area2)
                printf("Vencedor: %s\n", cidade1);
            else if(area2 > area1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Comparando PIB:\n");
            printf("%s: %.2f bilhões\n", cidade1, pib1);
            printf("%s: %.2f bilhões\n", cidade2, pib2);
            if(pib1 > pib2)
                printf("Vencedor: %s\n", cidade1);
            else if(pib2 > pib1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Comparando Pontos Turisticos:\n");
            printf("%s: %d\n", cidade1, pontos1);
            printf("%s: %d\n", cidade2, pontos2);
            if(pontos1 > pontos2)
                printf("Vencedor: %s\n", cidade1);
            else if(pontos2 > pontos1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Comparando Densidade Demografica:\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            if(densidade1 < densidade2) // menor vence
                printf("Vencedor: %s\n", cidade1);
            else if(densidade2 < densidade1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("Comparando PIB per capita:\n");
            printf("%s: %.2f\n", cidade1, pibPerCapita1);
            printf("%s: %.2f\n", cidade2, pibPerCapita2);
            if(pibPerCapita1 > pibPerCapita2)
                printf("Vencedor: %s\n", cidade1);
            else if(pibPerCapita2 > pibPerCapita1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}


