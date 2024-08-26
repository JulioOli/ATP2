#include <stdio.h>

int main()
{
    // declarando e inicializando o array de letrinhas
    char array[5] = {'a','b','c','d','e'};

    for (int i = 0; i < 5; i++)
    {
        printf("%c ", array[i]);
    }
    printf("\n\n");

    return 0;

}