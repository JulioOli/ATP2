/*Escreva um programa em C que receba uma string como
argumento na linha de comando e conte o número de caracteres dessa string.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    // verifica se o número de argumentos é diferente de 2

    if (argc != 2)
    {
        printf("Uso: %s <string>\n", argv[0]);
        return 1; // retorna com erro se a quantidade de argumentos for diferente de 2
    }

    // calcula o comprimento da string
    int comprimento = strlen(argv[1]);

    // Imprime o número de caracteres
    printf("A String |%s| tem %d caracteres.\n", argv[1], comprimento);

    return 0;
}