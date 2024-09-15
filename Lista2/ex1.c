/*Exercício 1
Enunciado: Escreva um programa em C que declare e inicialize uma matriz
3x3 e imprima seus elementos.*/

#include <stdio.h>
#include <stdlib.h>

void imprimeMatriz(int matriz[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); // só pra organizar as linhas
    }
}

int main()
{
    int matriz[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    imprimeMatriz(matriz);
    printf("\n");

    return 0;
}
