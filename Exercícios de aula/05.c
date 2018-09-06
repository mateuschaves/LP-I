#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pa(int p, int r, int n);

void main(void){
    printf("%d\n", pa(1, 2, 20));
    system("pause");
}

int pa(int p, int r, int n){
    int l = p + (n - 1) * r;
    return (((p + l)*n) / 2);
}