#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int v[1000];
    int k = 0;
    struct timeval start, stop;
    double secs = 0;

    for(; k <= 1000; k++){
        v[k] = rand() % 2000;
    }
    for(k = 0; k < 1000; k++){
        printf("%d - %d\n",k, v[k]);
    }
    int i, j, temp;
    int tamanho = sizeof(v)/sizeof(int);
    gettimeofday(&start, NULL);
    for(i = 0; i<tamanho; i++){
        for(j = i+1; j < tamanho; j++){
            if(v[i]>v[j]){
                temp = v[j];
                v[j] = v[i];
                v[i] = temp;
            }
        }
    }
    gettimeofday(&stop, NULL);
    secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    for(i = 0; i<tamanho;i++){
        printf("%i - %i\n",i, v[i]);
    }
    printf("Demorou %f segundos !\n", secs);
    system("pause");
}