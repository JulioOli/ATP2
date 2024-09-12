/*Exercício 39: Escreva um programa em C que declare um array de 6
inteiros e passe esse array para uma função que conte quantos elementos são
positivos.*/

#include <stdio.h>
#include <stdlib.h>

int positivos(int *array, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > 0) // verifica se são positivos
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int array[6] = {1, -2, 3, -4, 5, -6};

    printf("o array possui %d elementos positivos\n\n", positivos(array, 6));

    return 0;
}