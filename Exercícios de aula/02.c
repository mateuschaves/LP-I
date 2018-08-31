#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int menu();
void main()
{
    int a, b, escolha, resultado, e = 0;
    while(e != 1){
        scanf("%d%d", &a, &b);
        escolha = menu();
        switch(escolha){
            case 1:
                resultado = a + b;
                break;
            case 2:
                resultado = a - b;
                break;
            case 3:
                resultado = a * b;
                break;
            case 4:
                resultado = a / b;
                break;
            case 5:
                resultado = (float) a / b;
                break;
            case 6:
                e = 1;
                break;
        }
        printf("%i", resultado);
    }
    system("pause");
}

int menu(){
    int menu;
    printf("1 - SOMA\n");
    printf("2 - SUBTRACAO\n");
    printf("3 - MULTIPLICACAO\n");
    printf("4 - DIVISAO DE INTEIRO\n");
    printf("5 - DIVISAO DE REAL\n");
    printf("6 - SAIR\n");
    scanf("%d", &menu);
    return menu;
}

