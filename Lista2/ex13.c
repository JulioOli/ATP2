/*Exercício 13
Enunciado: Escreva um programa em C que verifique se uma matriz 4x4  ́e
uma matriz diagonal.*/
#include <stdio.h>
#include <stdlib.h>

void matDiagonal(int matriz[4][4])
{
    int ehDiagonal = 1; // flag q considera matriz diagonal

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i != j && matriz[i][j] != 0)
            {
                ehDiagonal = 0;
            }
        }
        if (!ehDiagonal)
            break;
    }

    if (ehDiagonal)
    {
        printf("A matriz é Diagonal.\n\n");
    }
    else
        printf("a matriz não é diagonal.\n\n");
}

int main()
{
    int matriz[4][4] = {{1, 0, 0, 0},
                        {0, 2, 0, 0},
                        {0, 0, 3, 0},
                        {0, 0, 0, 4}};

    matDiagonal(matriz);

    return 0;
}
