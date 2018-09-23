#include <stdio.h>
#include <stdlib.h>

void main(void){
    int m[4][4];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Informe o elemento [%d][%d] da matriz: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    /*
        0 1 2 3
        3 2 1 0
        5 6 4 7
        1 8 9 4
    */
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf(" %d ", m[i][j]);
        }
        printf("\n");
    }
   printf("Diagonal primaria: \n");
   for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i == j){
                printf(" %d ", m[i][j]);
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("Diagonal secundaria: \n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i == 4 - 1 - j){
                printf(" %d ", m[i][j]);
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
    system("pause");
}