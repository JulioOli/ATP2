/*Exercício 25
Enunciado: Escreva um programa em C que implemente o jogo da vida (Game
of Life) de Conway em uma matriz 5x5.*/
#include <stdio.h>

#define N 5

int pegaVizinhos(int grade[N][N], int x, int y)
{
    int contagem = 0;
    for (int i = -1; i <= 1; i++)
    {
        for (int j = -1; j <= 1; j++)
        {
            if (i == 0 && j == 0)
                continue;
            int nx = x + i, ny = y + j;
            if (nx >= 0 && nx < N && ny >= 0 && ny < N)
            {
                contagem += grade[nx][ny];
            }
        }
    }
    return contagem;
}

void jogoDaVida(int grade[N][N])
{
    int proximaGeracao[N][N] = {0};

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int vizinhos = pegaVizinhos(grade, i, j);
            if (grade[i][j] == 1 && (vizinhos == 2 || vizinhos == 3))
            {
                proximaGeracao[i][j] = 1;
            }
            else if (grade[i][j] == 0 && vizinhos == 3)
            {
                proximaGeracao[i][j] = 1;
            }
            else
            {
                proximaGeracao[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            grade[i][j] = proximaGeracao[i][j];
        }
    }
}

int main()
{
    int grade[N][N] = {
        {0, 0, 0, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 1, 0, 1, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}};

    jogoDaVida(grade);

    // Exibir o resultado da próxima geração
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", grade[i][j]);
        }
        printf("\n");
    }

    return 0;
}
