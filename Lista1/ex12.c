#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int cont = 0;
    int array[12];

    srand(time(NULL));

    for (int i = 0; i < 12; i++)
    {
        array[i] = (rand() % 40) - 20; // pra deixar de -20 à 20 eu fiz um
        if (array[i] < 0)              // array de 0 até 40 e subtrai 20 do
        {                              // valor aleatório gerado.
            cont++;
        }
    }

    // imprimindo o array
    printf("\nElementos do array: ");
    for (int i = 0; i < 12; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n\n");
    printf("o array tem %d números negativos\n\n\n", cont);

    return 0;
}