/*Exercício 36
Enunciado: Escreva um programa em C que preencha uma matriz 5x5 com
numeros aleatórios e depois ordene os elementos de cada coluna.*/
#include <stdio.h>

#define TAMANHO 5

void ordenarColunas(int matriz[TAMANHO][TAMANHO])
{
    for (int j = 0; j < TAMANHO; j++)
    {
        for (int i = 0; i < TAMANHO - 1; i++)
        {
            for (int k = i + 1; k < TAMANHO; k++)
            {
                if (matriz[i][j] > matriz[k][j])
                {
                    int temp = matriz[i][j];
                    matriz[i][j] = matriz[k][j];
                    matriz[k][j] = temp;
                }
            }
        }
    }
}

int main()
{
    int matriz[TAMANHO][TAMANHO] = {
        {12, 5, 9, 7, 6},
        {15, 11, 10, 13, 8},
        {4, 16, 2, 1, 3},
        {14, 18, 17, 19, 20},
        {21, 25, 22, 24, 23}};

    ordenarColunas(matriz);

    printf("Matriz com colunas ordenadas:\n");
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
