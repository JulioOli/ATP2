/*Exercício 38
Enunciado: Escreva um programa em C que verifique se uma matriz 3x3  ́e
uma matriz de Hankel.*/
#include <stdio.h>

#define TAMANHO 3

int verificarHankel(int matriz[TAMANHO][TAMANHO])
{
    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            if (matriz[i][j] != matriz[i + j][0])
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
        {2, 4, 5},
        {3, 5, 6}};

    if (verificarHankel(matriz))
    {
        printf("A matriz é uma matriz de Hankel.\n");
    }
    else
    {
        printf("A matriz NÃO é uma matriz de Hankel.\n");
    }

    return 0;
}
