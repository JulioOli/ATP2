#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*Escreva um programa em C que conte o numero de elementos
    pares e ímpares em um array de 20 inteiros.*/

    int array[20];
    int pares = 0;
    int impares = 0;

    srand(time(NULL));
    for (int i = 0; i < 20; i++)
    {
        array[i] = rand() % 20; // preenchendo o array com numeros aleatórios de 1 a 20
    }

    printf("Array gerado:");
    for (int i = 0; i < 20; i++) // esse for verifica se o elemento é par ou impar
    {
        if (array[i] % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
        printf(" %d", array[i]);
    }
    printf(".\n\n\n");

    printf("esse array possui %d números pares e %d ímpares.\n\n\n", pares, impares);

    return 0;
}