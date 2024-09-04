#include <stdio.h>

#define MAX 5

int minRec(int *array, int pos, int max)
{
    int retorno;

    if (pos < max)
    {
        retorno = minRec(array, pos + 1, max);
        return array[pos] < retorno ? array[pos] : retorno; //'?' é basicamente um if simplificado e o ':' é o else
    }
    return array[pos - 1];
}