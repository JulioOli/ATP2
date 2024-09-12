/*Exercício 37: Escreva um programa em C que declare um array de 5 inteiros
e passe esse array para uma função que calcule a média dos elementos do array.*/

#include <stdio.h>
#include <stdlib.h>

float media(float *array, int size)
{
    float soma = 0;
    for (int i = 0; i < size; i++)
    {
        soma += array[i];
    }

    return (soma / size);
}

int main()
{
    float array[5] = {1.5, 2.3, 3.9, 4.2, 5.8};
    printf("A média dos elementos do array é: %.2f\n\n", media(array, 5));
}