/*Exercício 41
Enunciado: Escreva um programa em C que verifique se uma matriz 3x3  ́e
uma matriz de Toeplitz.*/
#include <stdio.h>

#define TAMANHO 3

int verificarToeplitz(int matriz[TAMANHO][TAMANHO])
{
    for (int i = 1; i < TAMANHO; i++)
    {
        for (int j = 1; j < TAMANHO; j++)
        {
            if (matriz[i][j] != matriz[i - 1][j - 1])
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
        {1, 2, 3},
        {4, 1, 2},
        {5, 4, 1}};

    if (verificarToeplitz(matriz))
    {
        printf("A matriz é uma matriz de Toeplitz.\n");
    }
    else
    {
        printf("A matriz NÃO é uma matriz de Toeplitz.\n");
    }

    return 0;
}
