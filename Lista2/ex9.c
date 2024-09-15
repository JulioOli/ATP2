/*Exercício 9
Enunciado: Escreva um programa em C que encontre o maior elemento em
uma matriz 3x3.*/
#include <stdio.h>
#include <stdlib.h>

int maiorElemento(int matriz[3][3])
{
    int maior = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
        }
    }
    printf("o maior elemento da matriz é o %d.\n\n", maior);
}

int main()
{
    int matriz[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    maiorElemento(matriz);

    return 0;
}