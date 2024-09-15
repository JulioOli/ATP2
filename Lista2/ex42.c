/*Exercício 42
Enunciado: Escreva um programa em C que verifique se uma matriz 2x2  ́e
uma matriz de Householder.*/
#include <stdio.h>

#define TAMANHO 2

int verificarHouseholder(int matriz[TAMANHO][TAMANHO])
{
    if (matriz[0][0] == matriz[1][1] && matriz[0][1] == -matriz[1][0])
    {
        return 1;
    }
    return 0;
}

int main()
{
    int matriz[TAMANHO][TAMANHO] = {
        {1, -2},
        {2, 1}};

    if (verificarHouseholder(matriz))
    {
        printf("A matriz é uma matriz de Householder.\n");
    }
    else
    {
        printf("A matriz NÃO é uma matriz de Householder.\n");
    }

    return 0;
}
