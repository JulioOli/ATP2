/*Exerc ́ıcio 3
Enunciado: Escreva um programa em C que verifique se duas matrizes 2x2
são iguais.*/

#include <stdio.h>
#include <stdlib.h>

void verificaMatrizIgual(int matriz1[2][2], int matriz2[2][2])
{
    int iguais = 1; // flag pra checar se as matrizes são iguais

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (matriz1[i][j] != matriz2[i][j])
            {
                iguais = 0; // matrizes são diferentes
                break;
            }
        }
        if (!iguais)
            break;
    }

    if (iguais)
    {
        printf("As matrizes são iguais. \n\n");
    }
    else
    {
        printf("As matrizes são diferentes. \n\n");
    }
}

int main()
{
    int matriz1[2][2] = {{1, 2},
                         {3, 8}};

    int matriz2[2][2] = {{1, 2},
                         {3, 4}};

    verificaMatrizIgual(matriz1, matriz2);

    return 0;
}