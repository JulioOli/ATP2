#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int soma = 0;
    float media;

    int array[20];
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % 101 + 50;
        soma += array[i];
    }


    // Calcular a média dos elementos do array
    media = (float)soma / 10;

    // Imprimir os elementos do array
    printf("\nElementos do array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Imprimir a média
    printf("\nMedia dos elementos do array: %.2f\n\n", media);

    return 0;
}