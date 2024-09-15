/*Exercício 28
Enunciado: Escreva um programa em C que implemente a busca binária em
uma matriz ordenada 4x4.*/
#include <stdio.h>

int buscaBinaria(int arr[], int esquerda, int direita, int alvo)
{
    while (esquerda <= direita)
    {
        int meio = esquerda + (direita - esquerda) / 2;
        if (arr[meio] == alvo)
            return meio;
        if (arr[meio] < alvo)
            esquerda = meio + 1;
        else
            direita = meio - 1;
    }
    return -1;
}

int main()
{
    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    int alvo = 7;
    int resultado = -1;

    for (int i = 0; i < 4; i++)
    {
        resultado = buscaBinaria(mat[i], 0, 3, alvo);
        if (resultado != -1)
        {
            printf("Elemento encontrado na linha %d, coluna %d\n", i, resultado);
            break;
        }
    }

    if (resultado == -1)
    {
        printf("Elemento não encontrado na matriz\n");
    }

    return 0;
}
