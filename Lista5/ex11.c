#include <stdio.h>

int mdc(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return mdc(b, a % b);
}

int mdcArray(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    return mdc(arr[n - 1], mdcArray(arr, n - 1));
}

int main()
{
    int arr[] = {48, 36, 72};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("O MDC do array é %d\n", mdcArray(arr, n));
    return 0;
}
