#include <stdio.h>
#include <stdlib.h>

void main(void){
    char c;
    // Modei de ESC pra SPACE porque não tava funcionando com ESC.
    while( (int) c != 32 ){
        scanf("%c", &c);
        (c >= 97 && c <= 122) ? (printf("%c", c - 32)) : (printf("%c", c));
    }
    system("pause");
}
