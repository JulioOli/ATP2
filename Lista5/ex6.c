#include <stdio.h>

void imprimirReverso(int arr[], int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d ", arr[n - 1]);
    imprimirReverso(arr, n - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    imprimirReverso(arr, n);
    return 0;
}
