/*Exercício 49
Enunciado: Escreva um programa em C que calcule a transposta de uma
matriz 3x4.*/
#include <stdio.h>

#define LINHAS 3
#define COLUNAS 4

void calcularTransposta(int matriz[LINHAS][COLUNAS], int transposta[COLUNAS][LINHAS])
{
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            transposta[j][i] = matriz[i][j];
        }
    }
}

int main()
{
    int matriz[LINHAS][COLUNAS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    int transposta[COLUNAS][LINHAS];

    calcularTransposta(matriz, transposta);

    printf("Matriz transposta:\n");
    for (int i = 0; i < COLUNAS; i++)
    {
        for (int j = 0; j < LINHAS; j++)
        {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
