#include <stdio.h>
#include <stdlib.h>


void main(void){
    int m[4][4];
    int t[4][4];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Informe o elemento [%d][%d] da matriz: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf(" %d ", m[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            t[j][i] = m[i][j];
        }
    }

    printf("\nMatriz transposta\n");

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf(" %d ", t[i][j]);
        }
        printf("\n");
    }
    system("pause");
}