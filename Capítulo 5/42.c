#include <stdio.h>
#include <stdlib.h>

int date(int ano, int mes, int dia);

void main(void){

    int ano, mes, dia, c;
    c = scanf("%d%d%d", &ano, &mes, &dia);
    switch (c)
    {
        case 0:
            printf("Segunda - Feira\n");
            break;
        case 1:
            printf("Terca - Feira\n");
            break;
        case 2:
            printf("Quarta - Feira\n");
            break;
        case 3:
            printf("Quinta - Feira\n");
            break;
        case 4:
            printf("Sexta - Feira\n");
            break;
        case 5:
            printf("Sabado\n");
            break;
        case 6:
            printf("Domingo\n");
            break;
    }
    system("pause");
}

int date(int ano, int mes, int dia){
    return ((1461*(ano + 4800 + (mes - 14)/12))/4 + (367 * (mes - 2 - 12 *((mes - 14)/12)))/12 - (3*((ano + 4900 + (mes - 14)/12)/100))/4 + dia - 32075) % 7;
}