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
} Carta;

// Função para exibir menu de atributos
void exibirMenu(int excluir) {
    printf("\nEscolha um atributo:\n");
    if (excluir != 1) printf("1 - População\n");
    if (excluir != 2) printf("2 - Área\n");
    if (excluir != 3) printf("3 - PIB\n");
    if (excluir != 4) printf("4 - Pontos Turísticos\n");
    if (excluir != 5) printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
}

// Função para obter valor numérico de um atributo
float obterAtributo(Carta c, int opcao) {
    switch (opcao) {
        case 1: return c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return c.pontos_turisticos;
        case 5: return c.densidade;
        default: return 0;
    }
}

// Função para exibir nome do atributo
char* nomeAtributo(int opcao) {
    switch (opcao) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Pontos Turísticos";
        case 5: return "Densidade Demográfica";
        default: return "";
    }
}


    // Duas cartas pré-cadastradas (exemplo)
    Carta carta1 = {"Brasil", 213000000, 8515767.0, 1.84, 500, 25.0};
    Carta carta2 = {"Argentina", 45000000, 2780400.0, 0.49, 200, 16.2};

    int opcao1, opcao2;

    // Escolha do primeiro atributo
    exibirMenu(0);
    scanf("%d", &opcao1);

    // Escolha do segundo atributo (dinâmico, sem repetir o primeiro)
    exibirMenu(opcao1);
    scanf("%d", &opcao2);

    // Comparação individual dos dois atributos
    float valor1_c1 = obterAtributo(carta1, opcao1);
    float valor1_c2 = obterAtributo(carta2, opcao1);
    float valor2_c1 = obterAtributo(carta1, opcao2);
    float valor2_c2 = obterAtributo(carta2, opcao2);

    int pontos_c1 = 0, pontos_c2 = 0;

    // Regra geral: maior valor vence, exceto densidade (menor vence)
    // Atributo 1
    if (opcao1 == 5) { // densidade
        if (valor1_c1 < valor1_c2) pontos_c1++;
        else if (valor1_c2 < valor1_c1) pontos_c2++;
    } else {
        if (valor1_c1 > valor1_c2) pontos_c1++;
        else if (valor1_c2 > valor1_c1) pontos_c2++;
    }

    // Atributo 2
    if (opcao2 == 5) { // densidade
        if (valor2_c1 < valor2_c2) pontos_c1++;
        else if (valor2_c2 < valor2_c1) pontos_c2++;
    } else {
        if (valor2_c1 > valor2_c2) pontos_c1++;
        else if (valor2_c2 > valor2_c1) pontos_c2++;
    }

    // Soma dos valores dos atributos para cada carta
    float soma_c1 = valor1_c1 + valor2_c1;
    float soma_c2 = valor1_c2 + valor2_c2;

    // Resultado final
    printf("\n--- Resultado da Comparação ---\n");
    printf("%s:\n", carta1.nome);
    printf("  %s: %.2f\n", nomeAtributo(opcao1), valor1_c1);
    printf("  %s: %.2f\n", nomeAtributo(opcao2), valor2_c1);
    printf("  Soma: %.2f\n", soma_c1);

    printf("\n%s:\n", carta2.nome);
    printf("  %s: %.2f\n", nomeAtributo(opcao1), valor1_c2);
    printf("  %s: %.2f\n", nomeAtributo(opcao2), valor2_c2);
    printf("  Soma: %.2f\n", soma_c2);

    printf("\nResultado Final: ");
    if (soma_c1 > soma_c2) printf("%s venceu!\n", carta1.nome);
    else if (soma_c2 > soma_c1) printf("%s venceu!\n", carta2.nome);
    else printf("Empate!\n");

    return 0;
}


