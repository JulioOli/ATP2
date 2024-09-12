/*Exercício 38: Escreva um programa em C que declare um array de 10
inteiros e passe esse array para uma função que encontre o maior elemento do
array.*/

#include <stdio.h>
#include <stdlib.h>

int maior(int *array, int size)
{
    int maior = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > maior)
        {
            maior = array[i];
        }
    }
    return maior;
}

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 256, 8, 9, 10};

    printf("O maior elemento do array é: %d\n\n", maior(array, 10));
}