#include <stdio.h>

int raizQuadrada(int n, int inicio, int fim)
{
    if (inicio > fim)
    {
        return fim;
    }
    int meio = (inicio + fim) / 2;
    if (meio * meio == n)
    {
        return meio;
    }
    if (meio * meio < n)
    {
        return raizQuadrada(n, meio + 1, fim);
    }
    else
    {
        return raizQuadrada(n, inicio, meio - 1);
    }
}

int main()
{
    int n = 25;
    printf("A raiz quadrada de %d é %d\n", n, raizQuadrada(n, 1, n));
    return 0;
}
