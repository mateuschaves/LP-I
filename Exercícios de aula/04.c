#include <stdio.h>
#include <stdlib.h>


int fatorial(int n);

void main(void){
    printf("%d", fatorial(7));
    system("pause");
}

int fatorial(int n){
    return ((n > 1) ? ( n * fatorial(n - 1)) : 1 );
}