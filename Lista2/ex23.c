/* Exercício 23
Enunciado: Escreva um programa em C que calcule o determinante de uma
matriz quadrada 3x3. */
#include <stdio.h>

int determinante(int mat[3][3])
{
    return mat[0][0] * (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1]) -
           mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0]) +
           mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);
}

int main()
{
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    printf("Determinante: %d\n", determinante(mat));

    return 0;
}
