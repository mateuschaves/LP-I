#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char cat(char origem[], char destino[]);

int len(char txt[]);

void main(void){
    char str1[20], str2[20];
    strcpy(str1, "Oi ");
    strcpy(str2, "blz");
    cat(str1, str2);
    system("pause");
}

char cat(char origem[], char destino[]){
    int i = len(origem) + len(destino);
    int p = 0;
    //printf("%d\n", i);
    char new[i];
    for(; p < len(origem); p++){
        if(new[p] != "\0"){
            new[p] = origem[p];
        }
    }
    //printf("%d\n", p);
    //printf("%d\n", len(destino) + len(origem));
    for(; p < (len(destino) + len(origem)); p++){
        if(new[p] != "\0"){
            new[p] = destino[p];
        }
    }
    puts(new);
}

int len(char txt[]){
    int l = 0;
    for(int i = 0; txt[i] != '\0'; i++){
        l++;
    }
    return l;
}