#include <stdio.h>
#include <stdlib.h>

int soma(int n);

void main(void){
    int n;
    scanf("%d", &n);
    printf("%d\n", soma(n));
    system("pause");
}

int soma(int n){
    if(n == 1){
        return 1;
    }else{
        return n + soma(n - 1);
    }
}