#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int date(int ano, int mes, int dia);

void main(void){
    int ano, mes, dia;
    scanf("%d%d%d", &ano, &mes, &dia);
    printf("%i\n", date(ano, dia, mes));
    system("pause");
}

int date(int ano, int mes, int dia){
    return ((1461*(ano + 4800 + (mes - 14)/12))/4 + (367 * (mes - 2 - 12 *((mes - 14)/12)))/12 - (3*((ano + 4900 + (mes - 14)/12)/100))/4 + dia - 32075);
}