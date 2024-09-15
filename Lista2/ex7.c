/*Exercício 7
Enunciado: Escreva um programa em C que verifique se uma matriz 3x3  ́e
simétrica.*/

#include <stdlib.h>
#include <stdio.h>

int simetrica(int matriz[3][3])
{
    int simetrica = 1;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriz[i][j] != matriz[j][i])
            {
                simetrica = 0; // matriz não simétrica
                break;
            }
        }
        if (!simetrica)
            break;
    }

    if (simetrica)
    {
        printf("\na matriz dada é simétrica.\n\n");
    }
    else
        printf("\na matriz não é simétrica.\n\n");
}

int main()
{
    int matriz[3][3] = {{1, 2, 3},
                        {2, 5, 6},
                        {3, 6, 9}};

    simetrica(matriz);

    return 0;
}