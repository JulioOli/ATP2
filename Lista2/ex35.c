/*Exercício 35
Enunciado: Escreva um programa em C que verifique se uma matriz 4x4  ́e
uma matriz de Cauchy.*/
#include <stdio.h>

#define TAMANHO 4

int verificarCauchy(int matriz[TAMANHO][TAMANHO])
{
    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            if (matriz[i][j] != 1 / (i + j + 1))
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int matriz[TAMANHO][TAMANHO] = {
        {1, 1 / 2, 1 / 3, 1 / 4},
        {1 / 2, 1 / 3, 1 / 4, 1 / 5},
        {1 / 3, 1 / 4, 1 / 5, 1 / 6},
        {1 / 4, 1 / 5, 1 / 6, 1 / 7}};

    if (verificarCauchy(matriz))
    {
        printf("A matriz é uma matriz de Cauchy.\n");
    }
    else
    {
        printf("A matriz NÃO é uma matriz de Cauchy.\n");
    }

    return 0;
}
