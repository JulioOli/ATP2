#include <stdio.h>

int main() {
    char array[8];
    int cont = 0;

    // Lendo as letras
    printf("Digite 8 caracteres: \n");
    for (int i = 0; i < 8; i++) {
        scanf(" %c", &array[i]);

        // se qqr elemento do array tiver [Aa] ou [Ee] ou [Ii] ou [Oo] ou [Uu], ele incrementa o contador e no fim só imprime o contador
        if(array[i] == 'a' || array[i] == 'e' || array[i] == 'i' || array[i] == 'o' || array[i] == 'u' ||
           array[i] == 'A' || array[i] == 'E' || array[i] == 'I' || array[i] == 'O' || array[i] == 'U') {
            cont++;
        }
    }

    // Imprimindo o número de vogais
    printf("\nQtd de Vogais: %d\n\n", cont);

    return 0;
}
