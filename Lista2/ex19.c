/*Exercício 19
Enunciado: Escreva um programa em C que multiplique uma matriz 2x3 por
uma matriz 3x2 e armazene o resultado em uma matriz 2x2.*/
#include <stdio.h>

int main()
{
    // Definindo a primeira matriz 2x3
    int matriz1[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    // Definindo a segunda matriz 3x2
    int matriz2[3][2] = {
        {7, 8},
        {9, 10},
        {11, 12}};

    // Definindo a matriz resultado 2x2
    int resultado[2][2] = {0};

    // Multiplicação das duas matrizes
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    // Exibindo a matriz resultado
    printf("Matriz resultado (2x2):\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
