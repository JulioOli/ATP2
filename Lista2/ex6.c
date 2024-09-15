/*Exercício 6
Enunciado: Escreva um programa em C que calcule a diagonal principal de
uma matriz 5x5.*/

#include <stdio.h>
#include <stdlib.h>

void diagPrincipal(int matriz[5][5], int principal[5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                principal[i] = matriz[i][j];
            }
        }
    }
}

void imprimeMatriz(int matriz[5][5])
{
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matriz[5][5] = {{1, 2, 3, 4, 5},
                        {6, 7, 8, 9, 10},
                        {11, 12, 13, 14, 15},
                        {16, 17, 18, 19, 20},
                        {21, 22, 23, 24, 25}};

    int principal[5];

    imprimeMatriz(matriz);
    diagPrincipal(matriz, principal);

    printf("\na diagonal principal da matriz é:");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d", principal[i]);
    }
    printf("\n\n");

    return 0;
}