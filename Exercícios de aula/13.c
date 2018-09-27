#include <stdio.h>
#include <stdlib.h>


void main(void){
    int matrix[4][4];
    int i, j = 0;
    int count = 0;

    for(; i < 4; i++){
        for(; j < 4; j++){
            matrix[i][j] = count;
            count++;
        }
    }
    i = 0;
    j = 0;
    for(; i < 4; i++){
        for(; j < 4; j++){
            printf("%d\n", matrix[i][j]);
        }
    }

    system("pause");
}