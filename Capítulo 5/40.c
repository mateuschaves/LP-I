#include <stdio.h>
#include <stdlib.h>

int bi(int ano);


void main(void){
    int ano;
    scanf("%d", &ano);
    printf("%d",bi(ano));
    system("pause");
}

int bi(int ano){
    if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
        return 1;
    }else{
        return 0;
    }
}