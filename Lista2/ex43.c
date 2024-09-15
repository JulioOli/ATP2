/*Exercício 43
Enunciado: Escreva um programa em C que calcule a soma dos elementos
abaixo da diagonal principal de uma matriz 4x4.*/
#include <stdio.h>

#define TAMANHO 4

int somarAbaixoDiagonal(int matriz[TAMANHO][TAMANHO])
{
    int soma = 0;
    for (int i = 1; i < TAMANHO; i++)
    {
        for (int j = 0; j < i; j++)
        {
            soma += matriz[i][j];
        }
    }
    return soma;
}

int main()
{
    int matriz[TAMANHO][TAMANHO] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    int soma = somarAbaixoDiagonal(matriz);
    printf("A soma dos elementos abaixo da diagonal principal é: %d\n", soma);

    return 0;
}
