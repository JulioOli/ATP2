/*Exercício 50
Enunciado: Escreva um programa em C que verifique se uma matriz 4x4 ́e
uma matriz de Drazin.*/
#include <stdio.h>

#define TAMANHO 3

int verificarDiagonalDominante(int matriz[TAMANHO][TAMANHO])
{
    for (int i = 0; i < TAMANHO; i++)
    {
        int somaLinha = 0;
        for (int j = 0; j < TAMANHO; j++)
        {
            if (i != j)
            {
                somaLinha += matriz[i][j];
            }
        }
        if (matriz[i][i] < somaLinha)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int matriz[TAMANHO][TAMANHO] = {
        {3, 1, 1},
        {1, 4, 2},
        {2, 1, 5}};

    if (verificarDiagonalDominante(matriz))
    {
        printf("A matriz é diagonal dominante.\n");
    }
    else
    {
        printf("A matriz NÃO é diagonal dominante.\n");
    }

    return 0;
}
