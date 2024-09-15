/*Exercício 51
Enunciado: Escreva um programa em C que preencha uma matriz 3x3 com
numeros primos e depois calcule o produto dos elementos da diagonal secundária.*/
#include <stdio.h>

#define TAMANHO 2

int verificarSimetria(int matriz[TAMANHO][TAMANHO])
{
    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            if (matriz[i][j] != matriz[j][i])
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int matriz[TAMANHO][TAMANHO] = {
        {1, 2},
        {2, 1}};

    if (verificarSimetria(matriz))
    {
        printf("A matriz é simétrica.\n");
    }
    else
    {
        printf("A matriz NÃO é simétrica.\n");
    }

    return 0;
}
