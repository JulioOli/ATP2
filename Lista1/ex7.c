#include<stdio.h>

int main()
{
    float array[6]; //declarando o array de float
    float soma = 0, media;
    printf("insira 6 números de ponto flutuante: \n");

    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &array[i]);
        soma += array[1];
    }

    media = soma /2;
    printf("\na média dos 6 números é de: %f\n\n", media);
    

    return 0;
}