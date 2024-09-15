/*Exercício 18
Enunciado: Escreva um programa em C que verifique se uma matriz 3x3  ́e
uma matriz identidade.*/

#include <stdio.h>
#include <stdbool.h>

bool ehIdentidade(int matriz[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                // Verifica se os elementos da diagonal principal são 1
                if (matriz[i][j] != 1)
                {
                    return false;
                }
            }
            else
            {
                // Verifica se os elementos fora da diagonal principal são 0
                if (matriz[i][j] != 0)
                {
                    return false;
                }
            }
        }
    }
    return true;
}

int main()
{
    int matriz[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}};

    if (ehIdentidade(matriz))
    {
        printf("A matriz é uma matriz identidade.\n");
    }
    else
    {
        printf("A matriz não é uma matriz identidade.\n");
    }

    return 0;
}
