#include <stdio.h>

int binomial(int n, int k)
{
    if (k == 0 || k == n)
    {
        return 1;
    }
    return binomial(n - 1, k - 1) + binomial(n - 1, k);
}

int main()
{
    int n = 5, k = 2;
    printf("Coeficiente binomial C(%d, %d) = %d\n", n, k, binomial(n, k));
    return 0;
}
