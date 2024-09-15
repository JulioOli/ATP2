/*Exercício 15
Enunciado: Escreva um programa em C que inverta a ordem das linhas de
uma matriz 3x3.*/
#include <stdio.h>
#include <stdlib.h>

void inverteLinhas(int matriz1[3][3], int matriz2[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz2[i][j] = matriz1[2 - i][j];
        }
    }
}

int main()
{
    int matriz1[3][3] = {{1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}};
    int matriz2[3][3];

    inverteLinhas(matriz1, matriz2);

    printf("Matriz 1:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz 2:\n");
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