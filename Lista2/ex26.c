/* Exercício 26
Enunciado: Escreva um programa em C que verifique se uma matriz 3x3 é
uma matriz esparsa (maioria dos elementos são zeros). */
#include <stdio.h>

int ehEsparsa(int mat[3][3])
{
    int contagemZeros = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mat[i][j] == 0)
                contagemZeros++;
        }
    }

    return contagemZeros > (3 * 3) / 2;
}

int main()
{
    int mat[3][3] = {
        {0, 0, 1},
        {0, 0, 0},
        {0, 1, 0}};

    if (ehEsparsa(mat))
        printf("A matriz é esparsa.\n");
    else
        printf("A matriz NÃO é esparsa.\n");

    return 0;
}
