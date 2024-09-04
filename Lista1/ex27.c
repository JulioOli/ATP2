/*Escreva um programa em C que leia uma string e verifique
se ela é um palíndromo.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char string[100];
    int inicio;
    int fim;
    int comprimento;

    int eh_palindromo = 1; // primeiro eu assumo que é palíndromo

    // lendo a string
    printf("Digite a string: ");
    fgets(string, sizeof(string), stdin);

    // remove o \n (se tiver)
    string[strcspn(string, "\n")] = 0;

    comprimento = strlen(string);

    // verificando se é palíndromo
    inicio = 0;
    fim = comprimento - 1;
    while (inicio < fim)
    {
        if (tolower(string[inicio]) != tolower(string[fim]))
        {
            eh_palindromo = 0; // Não é palindromo
            break;
        }
        inicio++;
        fim--;
    }

    // resultado
    if (eh_palindromo)
    {
        printf("\nA string '%s' é palíndromo. \n\n\n", string);
    }
    else
    {
        printf("\nA string '%s' não é palindromo. \n\n\n", string);
    }

    return 0;
}
