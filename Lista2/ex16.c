/*Exercício 16
Enunciado: Escreva um programa em C que preencha uma matriz 5x5 com
numeros primos.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int primo(int n)
{
    int i;
    for (i = 2; i <= (int)sqrt(n); i++) // Converte o valor de sqrt para inteiro
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int matriz[5][5];
    int i, j, n = 1;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            while (!primo(n))
            {
                n++;
            }
            matriz[i][j] = n;
            n++;
        }
        }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}