/*Escreva um programa em C que receba um número inteiro
como argumento na linha de comando e verifique se ele  ́e par ou  ́ımpar.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Verifica se o número de argumentos é diferente de 2
    if (argc != 2)
    {
        printf("Uso: %s <num>\n", argv[0]);
        return 1; // Retorna com erro se a quantidade de argumentos for diferente de 2
    }

    // Converte o argumento de string para inteiro
    int num = atoi(argv[1]);

    // Verifica se o número é par ou ímpar
    if (num % 2 == 0)
    {
        printf("O número %d é par.\n", num);
    }
    else
    {
        printf("O número %d é ímpar.\n", num);
    }

    return 0;
}