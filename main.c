#include <stdio.h>   // Entrada e saída
#include <stdlib.h>  // Funções utilitárias
#include <string.h>  // Manipulação de strings


#define MAX_TERRITORIOS 5  // Número máximo de territórios a serem cadastrados

/*
 * Estrutura que representa um território no jogo
 * Contém:
 * - nome: nome do território
 * - corExercito: cor associada ao exército que ocupa o território
 * - qtdTropas: número de tropas presentes no território
 */
typedef struct {
    char nome[50];
    char corExercito[20];
    int qtdTropas;
} Territorio;

/*
 * Função responsável por cadastrar os territórios.
 * Recebe um vetor de Territorio e preenche os dados via entrada do usuário.
 */
void cadastrarTerritorios(Territorio lista[]) {
    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("\n=== Cadastro do Território %d de %d ===\n", i + 1, MAX_TERRITORIOS);

        printf("Digite o NOME do território: ");
        scanf(" %[^\n]", lista[i].nome);  // Lê string com espaços

        printf("Digite a COR do exército: ");
        scanf(" %[^\n]", lista[i].corExercito);

        printf("Digite a QUANTIDADE de tropas: ");
        scanf("%d", &lista[i].qtdTropas);
    }
}

/*
 * Função que exibe os territórios cadastrados.
 */
void exibirTerritorios(Territorio lista[]) {
    printf("\n\n=== Territórios Cadastrados ===\n");
    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("\nTerritório %d:\n", i + 1);
        printf(" - Nome: %s\n", lista[i].nome);
        printf(" - Cor do exército: %s\n", lista[i].corExercito);
        printf(" - Quantidade de tropas: %d\n", lista[i].qtdTropas);
    }
}

int main() {
    Territorio territorios[MAX_TERRITORIOS];

    // Cadastro dos territórios
    cadastrarTerritorios(territorios);

    // Exibição imediata dos territórios cadastrados
    exibirTerritorios(territorios);

    return 0;
}
