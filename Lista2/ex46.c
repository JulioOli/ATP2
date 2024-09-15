/*Exercício 46
Enunciado: Escreva um programa em C que preencha uma matriz 5x5 com
numeros aleatórios e depois encontre o segundo maior elemento.*/
#include <stdio.h>

#define TAMANHO 5

int encontrarSegundoMaior(int matriz[TAMANHO][TAMANHO])
{
    int maior = matriz[0][0], segundoMaior = matriz[0][0];
    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            if (matriz[i][j] > maior)
            {
                segundoMaior = maior;
                maior = matriz[i][j];
            }
            else if (matriz[i][j] > segundoMaior && matriz[i][j] != maior)
            {
                segundoMaior = matriz[i][j];
            }
        }
    }
    return segundoMaior;
}

int main()
{
    int matriz[TAMANHO][TAMANHO] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}};

    int segundoMaior = encontrarSegundoMaior(matriz);
    printf("O segundo maior elemento é: %d\n", segundoMaior);

    return 0;
}
