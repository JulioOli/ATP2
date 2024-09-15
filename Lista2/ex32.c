/*Exercício 32
Enunciado: Escreva um programa em C que verifique se uma matriz 2x2  ́e
uma matriz de reflexão.*/
#include <stdio.h>

int verificarReflexao(int matriz[2][2])
{
    if (matriz[0][0] == 1 && matriz[1][1] == 1 && matriz[0][1] == 0 && matriz[1][0] == 0)
        return 1;
    if (matriz[0][0] == -1 && matriz[1][1] == 1 && matriz[0][1] == 0 && matriz[1][0] == 0)
        return 1;
    return 0;
}

int main()
{
    int matriz[2][2] = {
        {1, 0},
        {0, -1}};

    if (verificarReflexao(matriz))
    {
        printf("A matriz é uma matriz de reflexão.\n");
    }
    else
    {
        printf("A matriz NÃO é uma matriz de reflexão.\n");
    }

    return 0;
}
