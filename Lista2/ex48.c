/*Exercício 48
Enunciado: Escreva um programa em C que preencha uma matriz 4x4 com
numeros aleatórios e depois calcule a média dos elementos acima da diagonal
principal.*/
#include <stdio.h>

#define TAMANHO 4

float calcularMediaAcimaDiagonal(int matriz[TAMANHO][TAMANHO])
{
    int soma = 0, contador = 0;
    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = i + 1; j < TAMANHO; j++)
        {
            soma += matriz[i][j];
            contador++;
        }
    }
    return (float)soma / contador;
}

int main()
{
    int matriz[TAMANHO][TAMANHO] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    float media = calcularMediaAcimaDiagonal(matriz);
    printf("A média dos elementos acima da diagonal principal é: %.2f\n", media);

    return 0;
}
