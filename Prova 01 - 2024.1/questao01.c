/*
Escreva uma função em C que receba duas matrizes quadradas de inteiros e retorne uma nova matriz que representa a soma das duas matrizes anteriores. Analise a complexidade do seu algoritmo, argumentando sobre o número total de operações, como também a complexidade final do código. (15 Pontos)
*/

#include <stdio.h>

void preencherMatriz(int N, int matriz[N][N]){                              //2
    // Preenchimento da matriz com os valores informados pelo usuário
    printf("Preencha a matriz %dx%d com valores inteiros:\n", N, N);        //1
    for (int i = 0; i < N; i++) {                                           //N
        for (int j = 0; j < N; j++) {                                       //N
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    return;
}


void somaMatrizes(int N, int matriz1[N][N], int matriz2[N][N], int somatorio[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            somatorio[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    return;
}


void imprimirMatriz(int N, int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}


int main() {
    int N;
    printf("Informe o tamanho da matriz: ");                //1
    scanf("%d", &N);                                        //1
    int matriz1[N][N], matriz2[N][N], somatorio[N][N];


    preencherMatriz(N, matriz1);                            //2N²
    preencherMatriz(N, matriz2);                            //2N²
    somaMatrizes(N, matriz1, matriz2, somatorio);           //5N²
    imprimirMatriz(N, somatorio);                           //N²+1
   
    return 0;                                               //1
}

/*
    RESPOSTA DA QUESTÃO 01:
        Soma de todas as funções de complexidade de algoritmos = 4 + 9N²
        A complexidade de todo o código é aproximadamente 9N²+4 porém na análise assíntota dessa complexidade, desconsideramos termos constantes
        e simplificamos para as expressões maiores da função, logo a complexidade desse código é quadrática, O(n²).
*/