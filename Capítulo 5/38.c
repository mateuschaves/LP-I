#include <stdio.h>
#include <stdlib.h>

int primo(int n);

void main(void){
    int n;
    scanf("%d", &n);
    printf("%d\n", primo(n));
    system("pause");
}

int primo(int n){
    int c = 0;
    for(int i = n; i >= 1; i--){
        if( n % i == 0 ){
            c++;
        }
    }
    if(c == 2){
        return 1;
    }else{
        return 0;
    }
}