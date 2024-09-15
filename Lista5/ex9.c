#include <stdio.h>
#include <string.h>

void inverterString(char str[], int inicio, int fim)
{
    if (inicio >= fim)
    {
        return;
    }
    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;
    inverterString(str, inicio + 1, fim - 1);
}

int main()
{
    char str[] = "recursao";
    inverterString(str, 0, strlen(str) - 1);
    printf("String invertida: %s\n", str);
    return 0;
}
