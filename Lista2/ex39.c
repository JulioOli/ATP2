/*Exercício 39
Enunciado: Escreva um programa em C que verifique se duas matrizes 3x3
são semelhantes.*/
#include <stdio.h>

#define TAMANHO 3

int verificarSemelhanca(int A[TAMANHO][TAMANHO], int B[TAMANHO][TAMANHO])
{
    int transposta[TAMANHO][TAMANHO];
    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            transposta[i][j] = B[j][i];
        }
    }

    int semelhantes = 1;
    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            if (A[i][j] != transposta[i][j])
            {
                semelhantes = 0;
                break;
            }
        }
    }
    return semelhantes;
}

int main()
{
    int A[TAMANHO][TAMANHO] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int B[TAMANHO][TAMANHO] = {
        {1, 4, 7},
        {2, 5, 8},
        {3, 6, 9}};

    if (verificarSemelhanca(A, B))
    {
        printf("As matrizes são semelhantes.\n");
    }
    else
    {
        printf("As matrizes NÃO são semelhantes.\n");
    }

    return 0;
}
