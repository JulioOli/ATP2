/*Exercício 34
Enunciado: Escreva um programa em C que preencha uma matriz 3x3 com
numeros primos e depois substitua os numeros primos por 1.*/
#include <stdio.h>

#define TAMANHO 3

int ehPrimo(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void preencherComPrimos(int matriz[TAMANHO][TAMANHO])
{
    int num = 2;
    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            while (!ehPrimo(num))
            {
                num++;
            }
            matriz[i][j] = num;
            num++;
        }
    }
}

void substituirPor1(int matriz[TAMANHO][TAMANHO])
{
    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            if (ehPrimo(matriz[i][j]))
            {
                matriz[i][j] = 1;
            }
        }
    }
}

int main()
{
    int matriz[TAMANHO][TAMANHO];

    preencherComPrimos(matriz);

    // Exibir matriz original com primos
    printf("Matriz preenchida com números primos:\n");
    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    substituirPor1(matriz);

    // Exibir matriz modificada
    printf("\nMatriz após substituição dos primos por 1:\n");
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
