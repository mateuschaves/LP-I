#include <stdio.h>
#include <stdlib.h>

int between(int n);

void main(void){
    int n;
    scanf("%d", &n);
    printf("%d\n", between(n));
    system("pause");
}

int between(int n){
    if(n >= 0 && n <= 9){
        return 1;
    }else{
        return 0;
    }
}