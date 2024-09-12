/*Exercício 36: Escreva um programa em C que receba 5 números inteiros
como argumentos na linha de comando e imprima o maior deles.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int maior = 0;

    // verificar se foram digitados 5 argumentos
    if (argc != 6) // aqui eu coloquei o numero 6 porque o nome do programa tbm é um argumento
    {
        printf("Uso: %s <num1> <num2> <num3> <num4> <num5>\n", argv[0]);
        return 1;
    }

    // convertendo os argumentos digitados para inteiros
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int num3 = atoi(argv[3]);
    int num4 = atoi(argv[4]);
    int num5 = atoi(argv[5]);

    for (int i = 1; i < argc; i++)
    {
        if (atoi(argv[i]) > maior)
        {
            maior = atoi(argv[i]);
        }
    }

    printf("O maior número digitado foi o: %d\n\n\n", maior);

    return 0;
}