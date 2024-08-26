/*Escreva um programa em C que declare um array de 7
inteiros e use um ponteiro para calcular a soma dos elementos do array.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int array[7];
    int *ptr;
    ptr = array;
    int soma;
    srand(time(NULL));

    for (int i = 0; i < 7; i++)
    {
        array[i] = rand() % 20;
        printf("\nPosição %d: %d", i, array[i]);
    }

    for (int i = 0; i < 7; i++)
    {
        soma += *(ptr + i);
    }

    printf("\n\nsoma: %d\n\n\n", soma);

    return 0;
}