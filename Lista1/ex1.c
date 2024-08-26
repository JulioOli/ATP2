#include <stdio.h>

int main()
{
    //Declarando e inicializando o array
    int array[10] = {0,1,2,3,4,5,6,7,8,9};

    // imprimindo os elementos do array
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n\n");

    return 0;

}