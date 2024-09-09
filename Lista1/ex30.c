/*Escreva um programa em C que use um array de ponteiros
para armazenar 3 strings, ordene as strings em ordem alfabética e as imprima.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *ptr[3],
        string[100],
        aux[100],
        menor[100];

    int i,
        ind_menor;

    for (i = 0; i < 3; i++)
    {
        printf("Digite a string %d:", i + 1); // pede a string na posição i + 1
        fgets(string, sizeof(string), stdin); // lê a string

        // Alocar memória para a string e armazenar no array de ponteiros
        ptr[i] = malloc(sizeof(char) * (strlen(string) + 1)); // +1 para o '\0'

        // copia a string para a memória alocada
        strcpy(ptr[i], string);
    }

    // ordenando as strings
    strcpy(menor, ptr[0]); // define a primeira string como a menor (copia a primeira string para menor)
    ind_menor = 0;

    for (i = 0; i < 3; i++)
    {
        if (strcmp(ptr[i], menor) < 0)
        { // verifica se a string na posição i é menor que a string menor, se for, entra no if

            strcpy(menor, ptr[i]); // copia a string na posição i para menor
            ind_menor = i;         // atualiza o índice da menor
        }
    }
    strcpy(aux, ptr[ind_menor]);    // copia a menor string para aux
    strcpy(ptr[ind_menor], ptr[0]); // copia a primeira string para a posição da menor string
    strcpy(ptr[0], aux);            // copia a string aux para a primeira posição

    strcpy(menor, ptr[1]);
    ind_menor = 1;

    for (i = 1; i < 3; i++)
    {
        if (strcmp(ptr[i], menor) < 0)
        {
            strcpy(menor, ptr[i]);
            ind_menor = i;
        }
    }

    strcpy(aux, ptr[ind_menor]);    // copia a menor string para aux
    strcpy(ptr[ind_menor], ptr[1]); // copia a segunda string para a posição da menor string
    strcpy(ptr[1], aux);            // copia a string aux para a segunda posição

    // Imprimindo as strings

    for (i = 0; i < 3; i++)
    {
        printf("%s\n", ptr[i]);
    }

    return 0;
}