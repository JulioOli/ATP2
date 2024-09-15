#include <stdio.h>

int calcularCaminhos(int n, int m)
{
    if (n == 1 || m == 1)
    {
        return 1;
    }
    return calcularCaminhos(n - 1, m) + calcularCaminhos(n, m - 1);
}

int main()
{
    int n = 3;
    printf("Número de caminhos em uma grade %dx%d é %d\n", n, n, calcularCaminhos(n, n));
    return 0;
}
