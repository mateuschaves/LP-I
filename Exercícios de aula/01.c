#include <stdio.h>
#include <stdlib.h>

void main(void){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if ((a < (b + c)) && (b < (c + a)) && (c < (a + b))){
        if (a == b && b == c){
            printf("EQUILATERO\n");
        }else if(a != b && b != c && c != a){
            printf("ESCALENO\n");
        }else{
            printf("ISOSCELES\n");
        }
    }else{
        printf("NAO E UM TRIANGULO\n");
    }
    system("pause");
}