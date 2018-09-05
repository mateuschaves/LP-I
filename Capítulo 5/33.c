#include <stdio.h>
#include <stdlib.h>


int isImpar(int n);

void main(void){
    int n;
    scanf("%d", &n);
    printf("%d\n", isImpar(n));
    system("pause");
}

int isImpar(int n){
    if(n % 2 == 0){
        return 0;
    }else{
        return 1;
    }
}