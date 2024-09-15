/*Exercício 21
Enunciado: Escreva um programa em C que verifique se uma matriz 3x3 é
uma matriz de permutação.*/
#include <stdio.h>

#define N 3 // Define o tamanho da matriz

// Função para verificar se uma matriz é de permutação
int ehMatrizPermutacao(int mat[N][N])
{
    for (int i = 0; i < N; i++)
    {
        int somaLinha = 0;  // Soma dos elementos da linha
        int somaColuna = 0; // Soma dos elementos da coluna
        for (int j = 0; j < N; j++)
        {
            somaLinha += mat[i][j];
            somaColuna += mat[j][i];
            // Se encontrar um número que não seja 0 ou 1, retorna falso
            if (mat[i][j] != 0 && mat[i][j] != 1)
                return 0;
        }
        // Em uma matriz de permutação, a soma das linhas e colunas deve ser 1
        if (somaLinha != 1 || somaColuna != 1)
            return 0;
    }
    return 1;
}

int main()
{
    int mat[N][N] = {
        {0, 1, 0},
        {1, 0, 0},
        {0, 0, 1}};

    if (ehMatrizPermutacao(mat))
        printf("A matriz é uma matriz de permutação.\n");
    else
        printf("A matriz NÃO é uma matriz de permutação.\n");

    return 0;
}
