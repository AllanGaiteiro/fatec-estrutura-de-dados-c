#include <stdio.h>
#include <stdbool.h>

int ligasao(int saldo,int tmp)
{
    ///variavel local
    int custo = 10;
    
    if (saldo < custo *tmp)
    {
        printf("Seu saldo é insuficiente\n");
        return saldo;
    }else{
        saldo += -(custo *tmp);
        printf("Voce efetuou uma ligação, saldo atual de: %d\n", saldo);
       return   saldo;
    }
}

int sms(int saldo)
{   
    //variavel local
    int custoSms = 5;

    
    
    if (saldo < custoSms)
    {
        ///variavel local
        printf("Seu saldo é insuficiente\n");
        return saldo;
    }else{
        saldo += -custoSms;
        printf("mandou um sms, seu saldo atual é de: %d\n", saldo);
        return saldo;
    }
    
    
}

int main(void)
{   
    ///variavel local
    int saldo = 50;

    ////////////// começa a gastar kkkk /////////
    saldo = ligasao(saldo,4);// primeiro numero saldo que vai descontar && segundo digito é tempo
    saldo = sms(saldo);// somente o saldo para descontar
    printf("Seu Saldo: %d\n", saldo);
}