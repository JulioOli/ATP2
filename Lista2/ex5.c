/*Exercício 5
Enunciado: Escreva um programa em C que transponha uma matriz 3x2 para
uma matriz 2x3.*/

#include <stdio.h>
#include <stdlib.h>

void matrizTransposta(int matriz1[3][2], int matriz2[2][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matriz2[j][i] = matriz1[i][j];
        }
    }
}

void imprimeMatriz1(int matriz[3][2])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); // só pra organizar as linhas
    }
}

void imprimeMatriz2(int matriz[2][3])
{
    for (int i = 0; i < 2; i++)
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
    int matriz1[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int matriz2[2][3];

    matrizTransposta(matriz1, matriz2);

    printf("Matriz 1:\n");
    imprimeMatriz1(matriz1);

    printf("\nMatriz 2:\n");
    imprimeMatriz2(matriz2);

    return 0;
}