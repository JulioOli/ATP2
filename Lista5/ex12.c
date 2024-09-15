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

void imprimirPrimos(int n)
{
    if (n < 2)
    {
        return;
    }
    imprimirPrimos(n - 1);
    if (verificarPrimo(n, 2))
    {
        printf("%d ", n);
    }
}

int main()
{
    int n = 20;
    imprimirPrimos(n);
    return 0;
}
