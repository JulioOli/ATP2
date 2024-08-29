/*Escreva um programa em C que declare um array de 8
números de ponto flutuante e use aritmética de ponteiros para calcular a média
dos valores.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    float array[8];
    float *ptr;
    ptr = array;

    float soma;

    printf("Digite 8 números de ponto flutuante:\n");
    for (int i = 0; i < 8; i++)
    {
        scanf("%f", (ptr + i));
    }

    for (int i = 0; i < 8; i++)
    {
        soma += *(ptr + i);
    }

    printf("\n\na média dos valores digitados é: %.2f\n\n\n", soma / 8);

    return 0;
}