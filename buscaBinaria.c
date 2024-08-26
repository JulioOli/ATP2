#include <stdio.h>

int busca_bin(int v[], int inicio, int fim, int chave)
{
    if (inicio == fim)
    {
        if (chave == v[inicio])
        {
            return inicio;
        }
        else
            return -1;
    }
    int meio = (inicio + fim) / 2;

    if (chave >= v[meio])
    {
        return busca_bin(v, meio, fim, chave);
    }
    else
        return busca_bin(v, inicio, meio - 1, chave);
}