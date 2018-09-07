#include <stdio.h>
#include <stdlib.h>

void main(void){
    int n, s = 0;
    scanf("%d", &n);
    int sequence[n];
    for(int i = 0; i < n; i++){
        if(i == 0 || i == 1){
            sequence[i] = 1;
        }else{
            sequence[i] = sequence[i - 1] + sequence[i - 2];
        }
    }
    printf("%d\n", sequence[n - 1]);
    system("pause");
}