#include <stdio.h>

int maxArray(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    int max = maxArray(arr, n - 1);
    return (arr[n - 1] > max) ? arr[n - 1] : max;
}

int main()
{
    int arr[] = {1, 5, 3, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("O maior elemento no array é %d\n", maxArray(arr, n));
    return 0;
}
