/*Exercício 10
Enunciado: Escreva um programa em C que encontre o menor elemento em
uma matriz 4x4.*/

#include <stdio.h>
#include <stdlib.h>

int menor(int matriz[4][4])
{
    int menor = 100;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
            }
        }
    }
    return menor;
}

int main()
{

    int matriz[4][4] = {{16, 26, 35, 41},
                        {5, 61, 72, 87},
                        {9, 11, 18, 12},
                        {13, 14, 15, 16}};

    printf("o menor elemento da matriz é o %d\n\n", menor(matriz));

    return 0;
}