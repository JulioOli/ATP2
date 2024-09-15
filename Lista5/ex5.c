#include <stdio.h>

int verificarPrimo(int n, int i)
{
    if (n <= 2)
    {
        return (n == 2) ? 1 : 0;
    }
    if (n % i == 0)
    {
        return 0;
    }
    if (i * i > n)
    {
        return 1;
    }
    return verificarPrimo(n, i + 1);
}

int main()
{
    int n = 29;
    if (verificarPrimo(n, 2))
    {
        printf("%d é primo.\n", n);
    }
    else
    {
        printf("%d não é primo.\n", n);
    }
    return 0;
}
