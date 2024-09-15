/*Exercício 45
Enunciado: Escreva um programa em C que multiplique uma matriz 3x3 por
sua transposta.*/
#include <stdio.h>

#define TAMANHO 3

void multiplicarPorTransposta(int matriz[TAMANHO][TAMANHO], int resultado[TAMANHO][TAMANHO])
{
    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            resultado[i][j] = 0;
            for (int k = 0; k < TAMANHO; k++)
            {
                resultado[i][j] += matriz[i][k] * matriz[j][k];
            }
        }
    }
}

int main()
{
    int matriz[TAMANHO][TAMANHO] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int resultado[TAMANHO][TAMANHO];

    multiplicarPorTransposta(matriz, resultado);

    printf("Resultado da multiplicação da matriz por sua transposta:\n");
    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
