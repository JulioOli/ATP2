#include <stdio.h>

int contarOcorrencias(int arr[], int n, int elemento)
{
    if (n == 0)
    {
        return 0;
    }
    return (arr[n - 1] == elemento) + contarOcorrencias(arr, n - 1, elemento);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 2, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int elemento = 2;
    printf("Número de ocorrências de %d: %d\n", elemento, contarOcorrencias(arr, n, elemento));
    return 0;
}
