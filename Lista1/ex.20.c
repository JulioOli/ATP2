/*Escreva um programa em C que declare um array de 12
caracteres e use aritmética de ponteiros para inverter a ordem dos
caracteres no array.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char array[12];
    char *ptr;
    char ch;

    ptr = array;

    printf("digite 12 caractéres (todos de uma vez antes de confirmar):\n\n");
    for (int i = 0; i < 12; i++)
    {
        scanf("%c", &ch);
        *(ptr + i) = ch; // usando o ptr pra armazenar as letras no array
    }

    printf("\n\narray de caractéres do avesso:");
    for (int i = 11; i >= 0; i--)
    {
        printf(" %c", *(ptr + i));
    }
    printf(".\n\n\n");

    return 0;
}