/*Exercício 40: Escreva um programa em C que declare um array de 8
inteiros e passe esse array para uma função que inverta a ordem dos elementos
do array.*/

#include <stdio.h>
#include <stdlib.h>

int inverte(int *array)
{
    int aux;

    for (int i = 0; i < 4; i++)
    {
        aux = array[i];          // aux recebe o primeiro elemento
        array[i] = array[7 - i]; // manda o ultimo elemento para a primeira posição
        array[7 - i] = aux;      // manda o elemento na primeira posição para a ultima
    }
    return 0;
}

int main()
{
    int array[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    inverte(array);

    for (int i = 0; i < 8; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n\n");

    return 0;
}