#include <stdio.h>

void imprimirSubconjuntos(char *conjunto, char *subconjunto, int indice, int tamanho)
{
    if (indice == tamanho)
    {
        printf("{%s}\n", subconjunto);
        return;
    }
    imprimirSubconjuntos(conjunto, subconjunto, indice + 1, tamanho);
    int len = strlen(subconjunto);
    subconjunto[len] = conjunto[indice];
    subconjunto[len + 1] = '\0';
    imprimirSubconjuntos(conjunto, subconjunto, indice + 1, tamanho);
    subconjunto[len] = '\0'; // volta ao estado original
}

int main()
{
    char conjunto[] = "abc";
    char subconjunto[10] = "";
    imprimirSubconjuntos(conjunto, subconjunto, 0, strlen(conjunto));
    return 0;
}
