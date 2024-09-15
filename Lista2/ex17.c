/*Exercício 17
Enunciado: Escreva um programa em C que encontre a posição (linha e coluna)
de um elemento específico em uma matriz 3x3.*/
/*Exercício 17
Enunciado: Escreva um programa em C que encontre a posição (linha e coluna)
de um elemento específico em uma matriz 3x3.*/
#include <stdio.h>

int main()
{
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int elemento, i, j;
    int encontrado = 0;

    printf("Digite o elemento a ser encontrado: ");
    if (scanf("%d", &elemento) != 1)
    {
        printf("Entrada inválida.\n");
        return 1; // Retorna um código de erro
    }

    // Percorre a matriz pra encontrar o elemento
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matriz[i][j] == elemento)
            {
                printf("Elemento %d está na linha %d e coluna %d\n", elemento, i, j);
                encontrado = 1; // Marca que o elemento foi encontrado
                break;
            }
        }
        if (encontrado)
        {
            break;
        }
    }

    if (!encontrado)
    {
        printf("Elemento %d não encontrado na matriz.\n", elemento);
    }

    return 0;
}
