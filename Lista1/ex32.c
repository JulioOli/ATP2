/*Escreva um programa em C que use um array de ponteiros
para armazenar 4 strings e encontre a string de maior comprimento.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *ptr[4];
    char string[100];

    int maior = 0; // esse vai ser o índice da maior string

    for (int i = 0; i < 4; i++)
    {
        ptr[i] = malloc(sizeof(char) * 100);
        if (ptr[i] == NULL)
        {
            printf("Erro de alocação de memória!\n");
            exit(1);
        }

        printf("Digite a %dº string: ", i + 1);
        fgets(string, sizeof(string), stdin);

        strcpy(ptr[i], string); // copia o conteúdo da string para ptr[i]
    }

    for (int i = 0; i < 4; i++)
    {
        if (strlen(ptr[i]) > strlen(ptr[maior]))
        {
            maior = i;
        }
    }

    printf("A string de maior comprimento é: %s\n", ptr[maior]);

    for (int i = 0; i < 4; i++)
    {
        free(ptr[i]);
    }

    return 0;
}