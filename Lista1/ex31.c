/*Escreva um programa em C que use um array de ponteiros
para armazenar 5 números inteiros e encontre o maior valor entre eles.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr[5],
        maior = 0;

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = malloc(sizeof(int));
        if (ptr[i] == NULL)
        {
            printf("Erro de alocação de memória!\n");
            exit(1);
        }

        printf("Digite o %dº número:", i + 1);
        scanf("%d", &ptr[i]);

        if (ptr[i] > maior)
        {
            maior = ptr[i];
            // maior = *(ptr+i);
        }
    }

    printf("O maior número digitado foi o %d.\n\n", maior);

    for (int i = 0; i < 5; i++)
    {
        free(ptr[i]);
    }

    return 0;
}