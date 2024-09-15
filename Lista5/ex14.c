#include <stdio.h>
#include <string.h>

int verificarPalindromo(char str[], int inicio, int fim)
{
    if (inicio >= fim)
    {
        return 1;
    }
    if (str[inicio] != str[fim])
    {
        return 0;
    }
    return verificarPalindromo(str, inicio + 1, fim - 1);
}

int main()
{
    char str[] = "arara";
    if (verificarPalindromo(str, 0, strlen(str) - 1))
    {
        printf("%s é um palíndromo.\n", str);
    }
    else
    {
        printf("%s NÃO é um palíndromo.\n", str);
    }
    return 0;
}
