#include <stdio.h>
#include <stdlib.h>

void a(int *x);

void main(void){
    int d = 2;
    printf("D: %d\n", d);
    a(&d);
    printf("D: %d\n", d);
    system("pause");
}

void a(int *x){
    *x = *x * *x;
}