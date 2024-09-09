#include <stdio.h>

int main()
{
    int vetor[5] = {1, 2, 3, 4, 5};
    int *ponteiro;
    ponteiro = vetor + 2;
    ponteiro++; //                     1           3              4            5
    printf("%d, %d, %d, %d\n\n\n", *vetor, *(ponteiro - 1), *ponteiro, *(ponteiro + 1));

    return 0;
}