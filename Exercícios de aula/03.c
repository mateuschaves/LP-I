#include <stdio.h>
#include <stdlib.h>


int fatorial(int n);

void main(void){
    printf("%d", fatorial(5));
    system("pause");
}


int fatorial(int n){
    if(n == 1){
        return 1;
    }else{
        int f = 1;
        for(int i = n; i > 1; i--){
            f *= i;
        }
        return f;
    }
}