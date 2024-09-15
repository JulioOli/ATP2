/*Exercício 20
Enunciado: Escreva um programa em C que calcule a soma das colunas de
uma matriz 4x3.*/
#include <stdio.h>

int main()
{
    // Definindo a matriz 4x3
    int matriz[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}};

    // Definindo um array para armazenar a soma das colunas
    int soma_colunas[3] = {0, 0, 0};

    // Calculando a soma das colunas
    for (int j = 0; j < 3; j++)
    { // Percorre as colunas
        for (int i = 0; i < 4; i++)
        { // Percorre as linhas
            soma_colunas[j] += matriz[i][j];
        }
    }

    // Exibindo a soma de cada coluna
    printf("Soma das colunas:\n");
    for (int j = 0; j < 3; j++)
    {
        printf("Coluna %d: %d\n", j + 1, soma_colunas[j]);
    }

    return 0;
}
