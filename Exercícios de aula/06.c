#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pg(int p, int q, int n);

void main(void){
    printf("%d\n", pg(1, 2, 3));
    system("pause");
}

int pg(int p, int q, int n){
    return (p*( pow(q,n) - 1 )) / (q - 1);
}