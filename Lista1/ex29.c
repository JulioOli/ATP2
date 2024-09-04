/*Escreva um programa em C que use um array de ponteiros para
armazenar e imprimir 5 strings.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char *ptr[5];
    char string[100];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite a string %d: ", i + 1); // pede a string e soma 1 no total pro char de nova linha '\0'
        fgets(string, sizeof(string), stdin);  // lê a string

        // essa func compara a primera string com a segunda e calcula
        // o comprimento da primeira tirando os elementos da segunda
        string[strcspn(string, "\n")] = '\0';

        // Alocar memória para a string e armazenar no array de ponteiros
        ptr[i] = malloc(strlen(string) + 1); // +1 para o '\0'

        // verificando se o malloc deu erro:
        if (ptr[i] == NULL)
        {
            printf("Erro de alocação de memória\n\n");
            exit(1); // fecha o programa
        }

        // copia a string para a memória alocada
        strcpy(ptr[i], string);
    }

    // imprimindo os arrays
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("String %d: %s\n", i + 1, ptr[i]);
    }

    // liberando a memória alocada
    for (int i = 0; i < 5; i++)
    {
        free(ptr[i]);
    }

    return 0;
}