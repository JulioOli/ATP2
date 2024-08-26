/*Exercício 14: Escreva um programa em C que declare um array de 5
inteiros e um ponteiro para inteiro. Use o ponteiro para modificar os valores
dos elementos do array. Imprima o array resultante.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5] = {6, 5, 8, 2, 4};
    int *ptr;
    ptr = array;

    // alterando o array
    for (int i = 0; i < 5; i++)
    {
        *(ptr + i) += 2;
    }

    printf("Array Modificado:");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d", array[i]);
    }

    return 0;
}