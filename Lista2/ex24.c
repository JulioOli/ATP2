/* Exercício 24
Enunciado: Escreva um programa em C que verifique se duas matrizes 3x3
são ortogonais. */
#include <stdio.h>

int ehOrtogonal(int mat1[3][3], int mat2[3][3])
{
    int produto[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            produto[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                produto[i][j] += mat1[i][k] * mat2[k][j];
            }
            if (i == j && produto[i][j] != 1)
                return 0;
            if (i != j && produto[i][j] != 0)
                return 0;
        }
    }
    return 1;
}

int main()
{
    int mat1[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}};

    int mat2[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}};

    if (ehOrtogonal(mat1, mat2))
        printf("As matrizes são ortogonais.\n");
    else
        printf("As matrizes NÃO são ortogonais.\n");

    return 0;
}
