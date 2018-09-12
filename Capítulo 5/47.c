#include <stdio.h>
#include <stdlib.h>

int powpow(int b, int e);

void main(void){
    int b, e;
    scanf("%d%D", &b, &e);
    printf("%d\n", powpow(b, e));
    system("pause");
}

int powpow(int b, int e){
    if(e == 1){
        return b;
    }else{
        return b*powpow(b, e - 1);
    }
}