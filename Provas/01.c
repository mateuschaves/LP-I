#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERRO "\n\nConta nao encontrada !\n\n"
#define ERRO2 "\n\n Saldo insuficiente ! \n\n"

typedef struct{
    char name[30];
    int number;
    float balance;
}client;

typedef struct{
    int number;
    char operation[15];
    float value;
}record;

client clients[100];
record records[300];

enum menu{registrar = 1, listar, deposito, saque, pagamento, extrato};

void create(int c);
void read(int c);
int put_money(int number, int c, float value, int r);
void create_record(int r, int number, char operation[], float value);
int take_money(int number, int c, float value, int r);
int pay_money(int number, int c, float value, int r);
void read_records(int r, int number);

int menu();

void main(void){
    int c, m = 0;
    int r = 0;
    int number;
    float value;
    do{
        m = menu();
        switch(m){
            case registrar:
                create(c);
                c++;
                break;
            case listar:
                read(c);
                break;
            case deposito:
                printf("Conta do deposito: ");
                scanf("%d", &number);
                printf("Valor do deposito: ");
                scanf("%f", &value);
                if(put_money(number, c, value, r) == 1){
                    r++;
                }
                break;
            case saque:
                printf("Conta do saque: ");
                scanf("%d", &number);
                printf("Valor do saque: ");
                scanf("%f", &value);
                if(take_money(number, c, value, r) == 1){
                    r++;
                }
                break;
            case pagamento:
                printf("Conta do pagamento: ");
                scanf("%d", &number);
                printf("Valor do pagamento: ");
                scanf("%f", &value);
                if(pay_money(number, c, value, r) == 1){
                    r++;
                }
                break;
            case extrato:
                printf("Conta do extrato: ");
                scanf("%d", &number);
                read_records(r, number);
                break;
        }
    }while(m != 0);
    system("pause");
}

int menu(){
    int c;
    printf("-=-=-=-=-=-=-= BANCO DO BRASIL -=-=-=-=-=-=-=\n");
    printf("1 - Cadastrar cliente.\n");
    printf("2 - Listar clientes.\n");
    printf("3 - Deposito\n");
    printf("4 - Saque\n");
    printf("5 - Pagamento\n");
    printf("6 - Extrato\n");
    printf("0 - Sair\n");
    printf(">>> ");
    scanf("%d", &c);
    return c;
}

void create(int c){
    printf("Nome: ");
    fflush(stdin);
    gets(clients[c].name);
    printf("Conta: ");
    fflush(stdin);
    scanf("%d", &clients[c].number);
    fflush(stdin);
    printf("Saldo: ");
    scanf("%f", &clients[c].balance);
}

void read(int c){
    printf("-=-=-=-=-= Listando todos os clientes -=-=-=-=-=-=\n");
    for(int i = 0; i < c; i++){
        printf("Nome: %s\n", clients[i].name);
        printf("Conta: %d\n", clients[i].number);
        printf("Saldo: %.2f\n\n", clients[i].balance);
    }
}

int put_money(int number, int c, float value, int r){
    for(int i = 0; i < c; i++){
        if(clients[i].number == number){
            clients[i].balance += value;
            create_record(r, number, "Deposito", value);
            return 1;
        }
    }
    printf(ERRO);
    return 0;
}

void create_record(int r, int number, char operation[], float value){
    records[r].number = number;
    strcpy(records[r].operation, operation);
    records[r].value = value;
}

void read_records(int r, int number){
    for(int i = 0; i < r; i++){
        if(records[i].number == number){
            printf("Operacao: %s\n", records[i].operation);
            printf("Conta: %d\n", records[i].number);
            printf("Valor: %.2f\n\n", records[i].value);
        }
    }
}

int take_money(int number, int c, float value, int r){
    for(int i = 0; i < c; i++){
        if(clients[i].number == number){
            if(clients[i].balance < value){
                printf(ERRO2);
                return 0;
            }
            clients[i].balance -= value;
            create_record(r, number, "Saque", value);
            return 1;
        }
    }
    printf(ERRO);
    return 0;
}

int pay_money(int number, int c, float value, int r){
    for(int i = 0; i < c; i++){
        if(clients[i].number == number){
            if(clients[i].balance < value){
                printf(ERRO2);
                return 0;
            }
            clients[i].balance -= value;
            create_record(r, number, "Pagamento", value);
            return 1;
        }
    }
    printf(ERRO);
    return 0;
}