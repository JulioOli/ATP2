#include <stdio.h>
#include <stdlib.h>

void duplica(int *lista, int tamanho)
{
    int *novaLista = malloc(2 * tamanho * sizeof(int));
    int i, j;

    for (i = 0, j = 0; i < tamanho; i++, j += 2)
    {
        novaLista[j] = novaLista[j + 1] = lista[i];
    }

    printf("X = [");
    for (i = 0; i < 2 * tamanho; i++)
    {
        printf("%d", novaLista[i]);
        if (i < 2 * tamanho - 1)
        {
            printf(",");
        }
    }
    printf("].\n");

    free(novaLista);
}

int main()
{
    int lista[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(lista) / sizeof(lista[0]); /*A expressão sizeof(lista[0]) retorna o tamanho em bytes
                                                      do primeiro elemento da lista. Dividindo o tamanho total
                                                      da lista pelo tamanho de cada elemento, obtemos o número
                                                      de elementos da lista.*/

    duplica(lista, tamanho);

    return 0;
}