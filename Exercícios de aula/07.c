#include <stdio.h>
#include <stdlib.h>

int vogal(char l);

void main(void){
    printf("%d", vogal('A'));
    system("pause");
}

int vogal(char l){
    char vogais[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; i < 10; i++){
        if(l == vogais[i]){
            return 1;
            break;
        }
    }
    return 0;
}