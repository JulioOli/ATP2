#include <stdio.h>

int main()
{
    //declaro e inicializo o array de primos
    int array[7] = {2, 3, 5, 7, 11, 13, 17};

    //imprimo os elementos do array
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n\n");
    
    return 0;

}