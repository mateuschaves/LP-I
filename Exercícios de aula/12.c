#include <stdio.h>
#include <stdlib.h>

union coin {
        float real, dolar;
};

typedef struct{
        char title[50];
        char author[50];
        int registration;
        union coin price;
} book;

book books[10];

void create();

void main(void){
    create();
    system("pause");
}

void create(){
    int moeda;
    for(int k = 0; k < 10; k++){
        printf("Informe o nome do livro: ");
        fflush(stdin);
        gets(books[k].title);
        printf("Informe o nome do autor: ");
        fflush(stdin);
        gets(books[k].author);
        printf("Informe o registro do livro: ");
        fflush(stdin);
        scanf("%d", &books[k].registration);
        printf("Escolha a moeda do preco do livro:\n ");
        printf("1 - Dolar\n");
        printf("2 - Real\n>>> ");
        fflush(stdin);
        scanf("%d", &moeda);
        printf("Informe o preco do livro : ");
        switch(moeda){
            case 1:
                scanf("%f", &books[k].price.dolar);
                break;
            case 2:
                scanf("%d", &books[k].price.real);
                break;
            default:
                printf("\nEscolha invalida !\n");
        }
    }
}