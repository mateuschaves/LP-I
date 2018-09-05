#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int bigger(int a, int b, int c);

void main(void){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d\n", bigger(a, b, c));
    system("pause");
}

int bigger(int a, int b, int c){
    int mab = (a + b + abs(a - b))/2;
    int bigger = (mab + c + abs(mab - c)) /2;
    return bigger;
}