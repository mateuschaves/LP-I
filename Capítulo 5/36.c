#include <stdio.h>
#include <stdlib.h>

int converter(char c);

void main(void){
    char c;
    scanf("%c", &c);
    printf("%d\n", converter(c));
    system("pause");
}

int converter(char c){
    int n = (int) c;
    if(n >= 0 && n <= 9){
        return n;
    }
}