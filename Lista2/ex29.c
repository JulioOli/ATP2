/*Exercício 29
Enunciado: Escreva um programa em C que roteie os elementos de uma matriz
3x3 em 90 graus no sentido anti-horário.*/
#include <stdio.h>

#define TAMANHO 3

void rotacionarAntiHorario(int matriz[TAMANHO][TAMANHO])
{
    int resultado[TAMANHO][TAMANHO];

    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            resultado[TAMANHO - j - 1][i] = matriz[i][j];
        }
    }

    // Copia o resultado de volta para a matriz original
    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            matriz[i][j] = resultado[i][j];
        }
    }
}

int main()
{
    int matriz[TAMANHO][TAMANHO] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    rotacionarAntiHorario(matriz);

    // Exibe a matriz rotacionada
    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
