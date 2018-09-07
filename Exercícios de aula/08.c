#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int quadrado_perfeito(float n){
    float raiz_inteira = (int) sqrt(n);
    if(sqrt(n) - raiz_inteira == 0){
        return 1;
    }else{
        return 0;
    }
}

void main(void){
    float n;
    scanf("%f", &n);
    if(quadrado_perfeito(n) == 1){
        printf("QUADRADO PERFEITO\n");
    }else{
        printf("QUADRADO IMPERFEITO\n");
    }
    system("pause");
}