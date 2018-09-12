#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);

void main(void){
    int n;
    scanf("%d", &n);
    printf("%d\n", fibonacci(n));
    system("pause");
}

int fibonacci(int n){
    if (n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}