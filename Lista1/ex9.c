#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[20];

    for (int i = 0; i < 20; i++)
    {
        array[i] = rand() % 100; //gerando numeros aleatórios entre 0 e 99
    }

    printf("Array de números aleatórios:");
    for (int i = 0; i < 20; i++)
    {
        printf(" %d", array[i]);
    }
    printf(".\n\n\n");

    return 0;
}