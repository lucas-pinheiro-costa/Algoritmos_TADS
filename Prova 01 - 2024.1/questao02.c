/*
Implemente um função para encontrar o maior elemento em uma matriz. O algoritmo deve escrever qual o valor, a linha e a coluna onde se encontra o maior valor. Analise a complexidade do seu algoritmo.
*/

#include <stdio.h>

// Função para encontrar o maior elemento em uma matriz
void encontrarMaiorElemento(int linhas, int colunas, int matriz[linhas][colunas]) {
    int maior = matriz[0][0];
    int linhaMaior = 0;
    int colunaMaior = 0;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

    printf("O maior valor é %d na linha %d e coluna %d.\n", maior, linhaMaior, colunaMaior);
}

int main() {
    int linhas, colunas;
    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);
    int matriz[linhas][colunas];

    // Ler os valores da matriz
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Encontrar o maior elemento
    encontrarMaiorElemento(linhas, colunas, matriz);

    return 0;
}