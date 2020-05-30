#include <stdio.h>

int ligasao(int a){
    if(a < 10){
        return printf("Seu saldo é insuficiente");
    }
    return a - 10;
}
int sms(int b){
    if(b < 5){
        return printf("Seu saldo é insuficiente");
    }
    return b - 5;
}

int main(void){
    int saldo = 50; 

    ////////////// começa a gastar kkkk ////////////
    saldo = ligasao(saldo);
    saldo = ligasao(saldo);
    saldo = ligasao(saldo);
    saldo = sms(saldo);
    saldo = ligasao(saldo);

    printf("Seu Saldo: %d\n",saldo);

}