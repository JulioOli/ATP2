/*Exercício 30
Enunciado: Escreva um programa em C que calcule a média dos elementos de
uma matriz 4x4.*/
#include <stdio.h>

#define TAMANHO 4

float calcularMedia(int matriz[TAMANHO][TAMANHO])
{
    int soma = 0;
    int totalElementos = TAMANHO * TAMANHO;

    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            soma += matriz[i][j];
        }
    }

    return (float)soma / totalElementos;
}

int main()
{
    int matriz[TAMANHO][TAMANHO] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    float media = calcularMedia(matriz);
    printf("A média dos elementos é: %.2f\n", media);

    return 0;
}
