/*Escreva um programa em C que receba 3 números inteiros como
argumentos na linha de comando e imprima a soma deles.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Verifica se o número de argumentos é diferente de 4
    if (argc != 4)
    {
        printf("Uso: %s <num1> <num2> <num3>\n", argv[0]);
        return 1; // Retorna com erro se a quantidade de argumentos for diferente de 4
    }

    // Converte os argumentos de strings para inteiros
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int num3 = atoi(argv[3]);

    // calcula a soma dos números
    int soma = num1 + num2 + num3;

    // Imprime o resultado
    printf("%d + %d + %d é igual a %d\n", num1, num2, num3, soma);

    return 0;
}