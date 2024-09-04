#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string1[100];
    char string2[100];

    // ler a primeira string
    printf("digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);

    // ler a segunda string
    printf("\ndigite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);

    // concatenando as duas strings
    strcat(string1, string2);

    // imprimindo a string resultante
    printf("\n\nString Concatenada: %s \n\n\n", string1);

    return 0;
}