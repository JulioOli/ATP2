/*Exercício 33
Enunciado: Escreva um programa em C que encontre o menor elemento em
uma matriz 5x5.*/
#include <stdio.h>

#define TAMANHO 5

int encontrarMenorElemento(int matriz[TAMANHO][TAMANHO])
{
    int menor = matriz[0][0];

    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
            }
        }
    }

    return menor;
}

int main()
{
    int matriz[TAMANHO][TAMANHO] = {
        {10, 12, 5, 6, 8},
        {9, 14, 15, 7, 3},
        {11, 13, 4, 2, 16},
        {18, 19, 17, 1, 20},
        {22, 21, 25, 23, 24}};

    int menor = encontrarMenorElemento(matriz);
    printf("O menor elemento é: %d\n", menor);

    return 0;
}
