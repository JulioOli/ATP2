#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*Escreva um programa em C que declare um array de 10
caracteres e use um ponteiro para contar quantos desses caracteres são letras
maiúsculas.*/

int main()
{
    char array[10];
    char *ptr;
    char ch;

    ptr = array;

    int soma = 0;

    printf("Digite 10 caractéres: ");
    for (int i = 0; i < 10; i++)
    {
        fflush(stdin); // limpa o buffer do teclado
        scanf("%c", &ch);
        array[i] = ch;
        printf("(%d %c)", i, array[i]);
        fflush(stdin);
    }

    printf("\n\nArray de caractéres(String):");
    for (int i = 0; i < 10; i++)
    {
        printf(" %c", *(ptr + i));
        if (isupper(*(ptr + i)))
        {
            soma++;
        }
    }

    printf(".\n\nNesse array tem %d letras maiúsculas.\n\n\n", soma);

    return 0;
}