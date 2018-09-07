#include <stdio.h>
#include <stdlib.h>

void main(void){
    for(int i = 32; i < 255; i++){
        printf("Decimal: %i\n", i);
        printf("Caractere: %c\n", i);
        printf("Hexadecimal: %x\n\n", i);
    }
    system("pause");
}