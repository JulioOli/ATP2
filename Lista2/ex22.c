/*Exercício 22
Enunciado: Escreva um programa em C que preencha uma matriz 4x4 com
numeros aleatórios e depois ordene os elementos de cada linha.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4

// Função para trocar dois elementos
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função para ordenar uma linha
void sortRow(int row[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (row[j] > row[j + 1])
            {
                swap(&row[j], &row[j + 1]);
            }
        }
    }
}

int main()
{
    int mat[N][N];
    srand(time(NULL));

    // Preencher a matriz com números aleatórios
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            mat[i][j] = rand() % 100;
        }
    }

    // Ordenar cada linha da matriz
    for (int i = 0; i < N; i++)
    {
        sortRow(mat[i], N);
    }

    // Exibir a matriz ordenada
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
