/*Exercício 4
Enunciado: Escreva um programa em C que multiplique duas matrizes 3x3.*/

#include <stdlib.h>
#include <stdio.h>

void multiplicaMatriz(int matriz1[3][3], int matriz2[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz1[i][j] = matriz1[i][j] * matriz2[i][j];
        }
    }
}

int main()
{
    int matriz1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matriz2[3][3] = {{2, 3, 4}, {5, 6, 7}, {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    multiplicaMatriz(matriz1, matriz2);

    printf("Matrizes multiplicadas: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    return 0;
}