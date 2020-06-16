#include <stdio.h>
#include <stdlib.h>


int ligasao(int saldoLocal)
{
    //printf(" saldo %d",saldoLocal);
    ///variavel local
    int tmp;
    int custo = 10;
    int custTotal;

    printf("quanto tempo vc desea falar: \n");
    scanf("%d",&tmp);
    custTotal = (custo) * (tmp);

    if (saldoLocal < custTotal)
    {
        printf("Seu saldo é insuficiente\n");
        return saldoLocal; 
    }
    else
    {
        saldoLocal += - custTotal;
        printf("Voce efetuou uma ligação de %d min por um valor de %d reais por minuto,ficou em %d Reais.\n Seu saldo atual de: %d\n", tmp, custo, custTotal, saldoLocal);
        return saldoLocal;
    }
}

int sms(int saldoLocal)
{
    ///variavel local
    int custoSms = 5;


    if (saldoLocal < custoSms)
    {
        printf("Seu saldo é insuficiente\n");
        return saldoLocal; 
        //return operadora(*ops,*saldo);
    }
    else
    {
        saldoLocal += -custoSms; 
        printf("Sua msg foi enviada.\n");
        return saldoLocal; 
    }
}

int operadora(int *ops,int *saldo){
    //printf("ops %d, saldo %d", *ops,*saldo);
    int saldoLocal = *saldo;

    
    if (*ops == 1 && *saldo > 9)
    {

        printf("Sua chamada sera efetuada aguarde um momento\n");
        *saldo =  ligasao(saldoLocal);
    }else if(*ops == 2 && *saldo > 4){
        printf("Sua mensagem esta sendo enviada \n");
        *saldo =  sms(saldoLocal);

    }else if (*saldo < 5){
        printf("Seu saldo é insuficiente pra fazer qualquer coisa \n");
        *ops = 0;
    }else{
        printf("operaçao invalida");
    }
    
}

int main(void)
{
    ///variavel local
    int saldo = 50;
    int ops;
        printf("Seu Saldo Inicial: %d\n", saldo);
    ////////////// começa a gastar kkkk /////////
    do
    {
        printf("digite (1)Ligar | (2)SMS | (0)Sair.\n");
        scanf("%d", &ops);
        operadora( &ops, &saldo);
        printf("Seu Saldo Atual: %d\n", saldo);
    } while (ops != 0);

    /////////////////////////////////////////////
    printf("Seu Saldo Final: %d\n", saldo);
}