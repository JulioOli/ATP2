#include <stdio.h>

int main()
{   //declarando o array de 5 posições
    int array[5];

    printf("Digite 5 valores inteiros: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }

    //imprimindo os valores ao contrário
    printf("valores na ordem inversa:\n");
    for (int i = 4; i >= 0; i--)  //Começa na ultima posição do array, vai imprimindo e decrementando, ou seja vai imprimir ele de trás pra frente
    {
        printf("%d", array[i]);
        printf("\n");
    }
    printf("\n\n");
    
    return 0;

}