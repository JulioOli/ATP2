/*Exercício 31
Enunciado: Escreva um programa em C que verifique se uma matriz 3x3  ́e
uma matriz de Vandermonde.*/
#include <stdio.h>

int verificarVandermonde(int matriz[3][3])
{
    for (int i = 1; i < 3; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            if (matriz[i][j] != matriz[i][0] * matriz[0][j])
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int matriz[3][3] = {
        {1, 1, 1},
        {2, 4, 8},
        {3, 9, 27}};

    if (verificarVandermonde(matriz))
    {
        printf("A matriz é uma matriz de Vandermonde.\n");
    }
    else
    {
        printf("A matriz NÃO é uma matriz de Vandermonde.\n");
    }

    return 0;
}
