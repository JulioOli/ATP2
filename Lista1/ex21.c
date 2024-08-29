/*Escreva um programa em C que encontre o maior e o menor
elemento em um array de 10 inteiros.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int array[10];
    int maior, menor;

    printf("Digite 10 números inteiros\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }

    maior = array[0];
    menor = array[0];

    for (int i = 0; i < 10; i++)
    {
        if (array[i] > maior)
        {
            maior = array[i];
        }

        if (array[i] < menor)
        {
            menor = array[i];
        }
    }

    printf("\n\no menor valor digitado é %d e o maior é %d\n\n\n", menor, maior);

    return 0;
}