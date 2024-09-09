#include <stdio.h>

int soma_rec(int v[], int i, int n){
    if (i == n-1)
        return v[i];
    else
        return v[i] + soma_rec(v, i + 1, n);
}

int main()
{
    int v[] = {1, 2, 3, 4, 5};
    int n = sizeof(v) / sizeof(v[0]);
    int resultado = soma_rec(v, 0, n);
    printf("Soma: %d\n", resultado);
    return 0;
}