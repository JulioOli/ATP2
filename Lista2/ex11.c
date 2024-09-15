/*Exercício 11
Enunciado: Escreva um programa em C que conte quantos elementos pares
existem em uma matriz 3x3.*/
#include <stdio.h>
#include <stdlib.h>

int contaPares(int matriz[3][3])
{
    int cont = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                cont++;
            }
        }
    }
    return cont;
}

int main()
{

    int matriz[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    printf("a matriz possui %d números pares.\n\n", contaPares(matriz));
    return 0;
}