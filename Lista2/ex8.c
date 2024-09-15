/*Exercício 8
Enunciado: Escreva um programa em C que realize a rotação de uma matriz
quadrada 4x4 no sentido horário.*/
#include <stdlib.h>
#include <stdio.h>

void rotacionaMatriz(int matriz[4][4], int deitada[4][4])
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            deitada[j][3 - i] = matriz[i][j];
        }
    }
}

int main()
{
    int matriz[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};
    int deitada[4][4];

    rotacionaMatriz(matriz, deitada);

    printf("\nmatriz normal:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n\nmatriz dps de rotacionar uma vez no sentido horário:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", deitada[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    return 0;
}