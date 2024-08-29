/*Escreva um programa em C que verifique se todos os ele-
mentos de um array de 5 inteiros são positivos.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    srand(time(NULL));
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        array[i] = (rand() % 5); //- 2;
    }

    printf("array gerado:");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d", array[i]);
    }
    printf(".\n\n");

    if (array[0] >= 0 && array[1] >= 0 && array[2] >= 0 && array[3] >= 0 && array[4] >= 0)
    {
        printf("o array possui só numeros positivos :)\n\n\n");
    }
    else
    {
        printf("nem só de de números positivos se faz um array\n\n\n");
    }

    return 0;
}