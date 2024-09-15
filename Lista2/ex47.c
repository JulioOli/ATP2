/*Exercício 47
Enunciado: Escreva um programa em C que verifique se uma matriz 3x3 ́e
uma matriz de circulante.*/
#include <stdio.h>

#define TAMANHO 3

int verificarCirculante(int matriz[TAMANHO][TAMANHO])
{
    for (int i = 1; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            if (matriz[i][j] != matriz[i - 1][(j + 1) % TAMANHO])
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
        {1, 2, 3},
        {3, 1, 2},
        {2, 3, 1}};

    if (verificarCirculante(matriz))
    {
        printf("A matriz é circulante.\n");
    }
    else
    {
        printf("A matriz NÃO é circulante.\n");
    }

    return 0;
}
