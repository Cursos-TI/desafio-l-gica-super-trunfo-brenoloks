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


// Estrutura da carta

typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
} Carta;

// Função para cadastrar uma carta
void cadastrarCarta(Carta *c) {
    printf("\nDigite o nome do país: ");
    scanf(" %[^\n]", c->nome);

    printf("Digite a população: ");
    scanf("%d", &c->populacao);

    printf("Digite a área (km²): ");
    scanf("%f", &c->area);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &c->pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &c->pontos_turisticos);

    // Cálculos automáticos
    c->densidade = c->populacao / c->area;
    c->pib_per_capita = (c->pib * 1000000000) / c->populacao; 
}

// Função para exibir a carta
void exibirCarta(Carta c) {
    printf("\n--- %s ---", c.nome);
    printf("\nPopulação: %d", c.populacao);
    printf("\nÁrea: %.2f km²", c.area);
    printf("\nPIB: %.2f bilhões", c.pib);
    printf("\nPontos turísticos: %d", c.pontos_turisticos);
    printf("\nDensidade demográfica: %.2f hab/km²", c.densidade);
    printf("\nPIB per capita: %.2f\n", c.pib_per_capita);
}

    Carta carta1, carta2;
    int opcao;
    int pontos_c1 = 0, pontos_c2 = 0;

    printf("Cadastro da Carta 1:\n");
    cadastrarCarta(&carta1);

    printf("\nCadastro da Carta 2:\n");
    cadastrarCarta(&carta2);

    // Menu de escolha
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica (menor vence)\n");
    printf("6 - PIB per capita\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n--- Comparação ---\n");

    switch(opcao) {
        case 1: // População
            printf("%s: %d | %s: %d\n", carta1.nome, carta1.populacao, carta2.nome, carta2.populacao);
            if (carta1.populacao > carta2.populacao) pontos_c1++;
            else if (carta2.populacao > carta1.populacao) pontos_c2++;
            break;

        case 2: // Área
            printf("%s: %.2f | %s: %.2f\n", carta1.nome, carta1.area, carta2.nome, carta2.area);
            if (carta1.area > carta2.area) pontos_c1++;
            else if (carta2.area > carta1.area) pontos_c2++;
            break;

        case 3: // PIB
            printf("%s: %.2f | %s: %.2f\n", carta1.nome, carta1.pib, carta2.nome, carta2.pib);
            if (carta1.pib > carta2.pib) pontos_c1++;
            else if (carta2.pib > carta1.pib) pontos_c2++;
            break;

        case 4: // Pontos turísticos
            printf("%s: %d | %s: %d\n", carta1.nome, carta1.pontos_turisticos, carta2.nome, carta2.pontos_turisticos);
            if (carta1.pontos_turisticos > carta2.pontos_turisticos) pontos_c1++;
            else if (carta2.pontos_turisticos > carta1.pontos_turisticos) pontos_c2++;
            break;

        case 5: // Densidade (menor vence)
            printf("%s: %.2f | %s: %.2f\n", carta1.nome, carta1.densidade, carta2.nome, carta2.densidade);
            if (carta1.densidade < carta2.densidade) pontos_c1++;
            else if (carta2.densidade < carta1.densidade) pontos_c2++;
            break;

        case 6: // PIB per capita
            printf("%s: %.2f | %s: %.2f\n", carta1.nome, carta1.pib_per_capita, carta2.nome, carta2.pib_per_capita);
            if (carta1.pib_per_capita > carta2.pib_per_capita) pontos_c1++;
            else if (carta2.pib_per_capita > carta1.pib_per_capita) pontos_c2++;
            break;

        default:
            printf("Opção inválida!\n");
            return 0;
    }

    // Resultado
    printf("\n--- Resultado ---\n");
    if (pontos_c1 > pontos_c2) {
        printf("%s venceu!\n", carta1.nome);
    } else if (pontos_c2 > pontos_c1) {
        printf("%s venceu!\n", carta2.nome);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
