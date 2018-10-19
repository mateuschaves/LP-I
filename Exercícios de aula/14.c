#include <stdio.h>
#include <stdlib.h>



void main(void){
    int n, c = 0;
    int r[8];
    scanf("%d", &n);
    while(n != 0){
        r[c] = n % 2;
        n /= 2;
        c++;
    }
    for(int i = c - 1; i >= 0; i--){
        printf("%d", r[i]);
    }
    printf("\n");
    system("pause");
}