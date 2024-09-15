/*Exercício 2
Enunciado: Escreva um programa em C que calcule a soma dos elementos de
uma matriz 4x4.*/

#include <stdio.h>
#include <stdlib.h>

void imprimeMatriz(int matriz[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int somaElementos(int matriz[4][4])
{
    int soma = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            soma += matriz[i][j];
        }
    }
    return soma;
}

int main()
{
    int matriz[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

    imprimeMatriz(matriz);

    printf("\n\nA soma dos elementos da matriz é: %d\n\n\n", somaElementos(matriz));

    return 0;
}