#include <stdio.h>
#include <stdlib.h>


int fatorial(int n);

void main(void){
    printf("%d", fatorial(5));
    system("pause");
}

int fatorial(int n){
    int aux;
    (n > 1) ? (aux = n * fatorial(n - 1)) :( aux = 1 );
    return aux;
}