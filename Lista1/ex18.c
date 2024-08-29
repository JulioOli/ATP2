/*Escreva um programa em C que declare um array de 10
inteiros e use aritmética de ponteiros para calcular a soma de todos os elementos
do array. Imprima a soma.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int array[10];
    int *ptr;
    ptr = array;
    int soma;

    printf("digite 10 inteiros:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (ptr + i));
    }

    for (int i = 0; i < 10; i++)
    {
        soma += *(ptr + i);
    }

    printf("\n\na soma de todos os valores do array é: %d\n\n\n", soma);

    return 0;
}