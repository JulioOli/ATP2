/*Escreva um programa em C que use um array de ponteiros para
armazenar e imprimir 5 strings.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char *ptr[5];
    char string[100];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite a string %d: ", i + 1);
        fgets(string, sizeof(string), stdin);

        // Alocar memória para a string e armazenar no array de ponteiros
        ptr[i] = malloc(strlen(string) + 1); // +1 para o '\0'
        strcpy(ptr[i], string);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Digite a string %d: ", i + 1);
        fgets(string, sizeof(string), stdin);

        // Alocar memória para a string e verificar se malloc foi bem-sucedido
        ptr[i] = malloc(strlen(string) + 1); // +1 para incluir o caractere nulo '\0'
        if (ptr[i] == NULL)
        {
            printf("Erro de alocação de memória!\n");
            exit(1); // Sai do programa se malloc falhar
        }

        // Copiar a string para a memória alocada
        strcpy(ptr[i], string);
    }
    // Imprimindo os arrays de ponteiros:
    for (int i = 0; i < 5; i++)
    {
        printf("\nString %d: %s", i + 1, ptr[i]);
    }

    return 0;
}