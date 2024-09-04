#include <stdio.h>
#include <string.h>

int main()
{
    char string[1000];
    int caracteres = 0, palavras = 0, linhas = 0;

    printf("Digite uma string (aperte Enter quando terminar): ");
    fgets(string, sizeof(string), stdin); // lê a string, incluindo espaços e novas linhas

    if (string[0] != '\0' && string[0] != '\n')
    {
        palavras = 1;
        linhas = 1;
    }

    // contagem de caracteres, palavras e linhas
    for (int i = 0; string[i] != '\0'; i++)
    {
        caracteres++;

        // conta palavras quando encontrar espaço ou nova linha se encontrar um \n
        if (string[i] == ' ' || string[i] == '\n')
        {
            if (string[i + 1] != ' ' && string[i + 1] != '\n' && string[i + 1] != '\0')
            {
                palavras++;
            }
        }

        if (string[i] == '\n')
        {
            linhas++;
        }
    }

    printf("Nessa string tem %d caracteres, %d palavras e %d linhas.\n", caracteres, palavras, linhas);

    return 0;
}
