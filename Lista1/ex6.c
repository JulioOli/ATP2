#include <stdio.h>

int main()
{
    int array [10], total = 0;
    printf("Insira 10 números inteiros: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
        total += array[i];
    }

    printf("\n o total da soma vai ser: %d\n\n", total);
    

    return 0;
}