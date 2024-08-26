#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5] = {9, 3, 5, 1, 7};

    int *ptr;

    ptr = array;

    for (int i = 0; i < 5; i++)
    {
        printf("Elemento %d: %d\n\n", i, *(ptr + i));
    }

    return 0;
}