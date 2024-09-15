#include <stdio.h>

int somaDigitos(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n % 10) + somaDigitos(n / 10);
}

int main()
{
    int n = 12345;
    printf("A soma dos dígitos de %d é %d\n", n, somaDigitos(n));
    return 0;
}
