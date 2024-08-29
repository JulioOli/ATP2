/*Escreva um programa em C que declare um array de 5 inteiros
e use aritmética de ponteiros para somar 10 a cada elemento do array. Imprima*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5];
    int *ptr;
    ptr = array;

    printf("Digite 5 inteiros: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", (ptr + i)); // passando o endereço de onde vai ser armazenado o número
    }

    for (int i = 0; i < 5; i++)
    {
        *(ptr + i) += 10;
    }

    printf("\n\narray com todos os valores +10:");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d", *(ptr + i));
    }
    printf(".\n\n\n");

    return 0;
}