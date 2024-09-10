/*Escreva um programa em C que receba 3 números inteiros como
argumentos na linha de comando e imprima a soma deles.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0;
    int num;

    for (int i = 0; i < 3; i++)
    {
        printf("Digite o %dº número inteiro: ", i + 1);
        int num;
        scanf("%d", &num);
        soma += num;
    }

    printf("\nA soma dos números é: %d\n\n", soma);
}