#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Escreva um programa em C que preencha um array de 15
inteiros com n ́umeros aleatórios entre 0 e 50. Em seguida, encontre e imprima
o maior valor do array.*/
int main()
{

    int array[15];
    int max = array[0];

    srand(time(NULL));
    printf("Array de aleatórios:");
    for (int i = 0; i < 15; i++)
    {
        array[i] = rand() % 50;
        printf(" %d", array[i]);
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    printf(".\n\nO maior valor gerado no array é: %d\n\n", max);

    return 0;
}