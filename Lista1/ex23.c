/*Escreva um programa em C que determine se um array de
10 inteiros  ́e simétrico (um palíndromo).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int array[10];
    int count = 10;

    printf("preencha o array com 10 numeros\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &array[i]);
    }

    if (array[0] == array[9] && array[1] == array[8] && array[2] == array[7] && array[3] == array[6] && array[4] == array[5])
    {
        printf("\n\no array é um palíndromo numérico!\n\n\n");
    }
    else
    {
        printf("\n\nsó um array normal saporra.\n\n\n");
    }

    return 0;
}