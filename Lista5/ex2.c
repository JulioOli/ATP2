#include <stdio.h>

int somaNaturais(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + somaNaturais(n - 1);
}

int main()
{
    int n = 10;
    printf("A soma dos primeiros %d números naturais é %d\n", n, somaNaturais(n));
    return 0;
}
