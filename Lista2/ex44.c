/*Exercício 44
Enunciado: Escreva um programa em C que verifique se uma matriz 3x3  ́e
uma matriz de Hankel circular.*/
#include <stdio.h>

#define TAMANHO 3

int verificarHankelCircular(int matriz[TAMANHO][TAMANHO])
{
    for (int i = 0; i < TAMANHO; i++)
    {
        if (matriz[i][0] != matriz[0][i] || matriz[i][TAMANHO - 1] != matriz[TAMANHO - 1][i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int matriz[TAMANHO][TAMANHO] = {
        {1, 2, 3},
        {2, 1, 2},
        {3, 2, 1}};

    if (verificarHankelCircular(matriz))
    {
        printf("A matriz é uma matriz de Hankel circular.\n");
    }
    else
    {
        printf("A matriz NÃO é uma matriz de Hankel circular.\n");
    }

    return 0;
}
