/*Exercício 40
Enunciado: Escreva um programa em C que realize a rotação de uma matriz
quadrada 5x5 no sentido horário.*/
#include <stdio.h>

#define TAMANHO 5

void rotacionarHorario(int matriz[TAMANHO][TAMANHO])
{
    int resultado[TAMANHO][TAMANHO];
    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            resultado[j][TAMANHO - 1 - i] = matriz[i][j];
        }
    }

    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            matriz[i][j] = resultado[i][j];
        }
    }
}

int main()
{
    int matriz[TAMANHO][TAMANHO] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}};

    rotacionarHorario(matriz);

    printf("Matriz rotacionada 90 graus no sentido horário:\n");
    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
