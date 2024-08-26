#include <stdio.h>

int soma_rec(int v[], int i, int n){
    if (i == n-1)
    return v[i];
    else
    return v[i] + soma_rec(v, i+1, n);
}