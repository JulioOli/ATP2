/*Exercício 27
Enunciado: Escreva um programa em C que multiplique uma matriz 3x3 por
um escalar.*/
#include <stdio.h>

void multiplicarPorEscalar(int matriz[3][3], int escalar)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] *= escalar;
        }
    }
}

int main()
{
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int escalar = 3;

    multiplicarPorEscalar(matriz, escalar);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
