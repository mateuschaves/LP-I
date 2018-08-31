#include <stdio.h>
#include <stdlib.h>

int fatorial(int n);

void main(void){
    int r, n = 0;
    scanf("%d%d", &r, &n);
    float ncr = fatorial(n) / fatorial(r) * fatorial(n - r);
    printf("%.2f\n",ncr);
    system("pause");
}

int fatorial(int n){
    int fatorial = 1;
    for(int i = n; i > 1; i--){
        fatorial *= i;
    }
    return fatorial;
}