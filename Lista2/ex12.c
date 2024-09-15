/*Exercício 12
Enunciado: Escreva um programa em C que calcule a média dos elementos de
uma matriz 2x4.*/

#include <stdio.h>
#include <stdlib.h>

float media(int matriz[2][4])
{
    int soma = 0;
    float media;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            soma += matriz[i][j];
        }
    }
    media = (float)soma / 8;

    return media;
}

int main()
{
    int matriz[2][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8}};

    printf("a média dos elementos da matriz é %0.2f\n\n", media(matriz));

    return 0;
}
