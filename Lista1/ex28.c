/*Escreva um programa em C que leia uma string e substitua
todas as ocorências de um caractere por outro.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char string[100];
    char letra_antiga;
    char letra_nova;

    // lendo a string
    printf("Digite a string: ");
    fgets(string, sizeof(string), stdin);

    // remove 0 \n (se tiver)
    string[strcspn(string, "\n")] = 0;

    printf("digite a letra que vc quer substituir: ");
    scanf(" %c", &letra_antiga);

    printf("digite a letra que vai substituir a anterior: ");
    scanf(" %c", &letra_nova); /*colocar um um espaço antes do %c no scanf,
                                 faz o scanf ignorar qualquer espaço em branco
                                 (incluindo \n) antes de ler o próximo caractere.*/

    // Substituir todas as letras antigas pelas novas
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == letra_antiga)
        {
            string[i] = letra_nova;
        }
    }

    printf("\nString Modificada: %s\n\n\n", string);

    return 0;
}