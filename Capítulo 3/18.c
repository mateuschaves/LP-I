#include <stdio.h>
#include <stdlib.h>

void main(void){
    int n, n1 = 0;
    int a, b, c = 1;
    scanf("%d", &n);
    for(a = 1; a < 7; a++){
        for(b = 1; b < 7; b++ ){
            for(c = 1; c < 7; c++){
                if(a + b + c == n)
                    n1++;
            }
        }
    }
    printf("A probabilidade de sair %d eh de %.2f%%.\n", n, ((float)n1 / 216)*100);
    system("pause");
}