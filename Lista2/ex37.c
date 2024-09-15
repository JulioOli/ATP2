/*Exercício 37
Enunciado: Escreva um programa em C que multiplique uma matriz 2x3 por
uma matriz 3x4 e armazene o resultado em uma matriz 2x4.*/
#include <stdio.h>

#define LINHAS_A 2
#define COLUNAS_A 3
#define COLUNAS_B 4

void multiplicarMatrizes(int A[LINHAS_A][COLUNAS_A], int B[COLUNAS_A][COLUNAS_B], int C[LINHAS_A][COLUNAS_B])
{
    for (int i = 0; i < LINHAS_A; i++)
    {
        for (int j = 0; j < COLUNAS_B; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < COLUNAS_A; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main()
{
    int A[LINHAS_A][COLUNAS_A] = {
        {1, 2, 3},
        {4, 5, 6}};

    int B[COLUNAS_A][COLUNAS_B] = {
        {7, 8, 9, 10},
        {11, 12, 13, 14},
        {15, 16, 17, 18}};

    int C[LINHAS_A][COLUNAS_B];

    multiplicarMatrizes(A, B, C);

    printf("Resultado da multiplicação:\n");
    for (int i = 0; i < LINHAS_A; i++)
    {
        for (int j = 0; j < COLUNAS_B; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
