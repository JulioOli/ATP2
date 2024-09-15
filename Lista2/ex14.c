/*Exercício 14
Enunciado: Escreva um programa em C que copie os elementos de uma matriz
3x3 para outra matriz.*/
#include <stdio.h>
#include <stdlib.h>

void copiaMatriz(int matriz[3][3], int matriz2[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz2[i][j] = matriz[i][j];
        }
    }
}

int main()
{
    int matriz1[3][3] = {{1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}};
    int matriz2[3][3];

    copiaMatriz(matriz1, matriz2);

    printf("matriz original:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\nmatriz copiada:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    return 0;
}