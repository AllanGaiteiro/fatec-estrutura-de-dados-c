#include <stdio.h>
#include <stdbool.h>

int ligasao(int *saldo,int tmp)
{
    ///variavel local
    int custo = 10;
    
    if (*saldo < custo *tmp)
    {
       return  printf("Seu saldo é insuficiente\n");
    }else{
        *saldo += -(custo *tmp);
      return  printf("Voce efetuou uma ligação de %d min por um valor de %d reais por minuto,ficou em %d Reais.\n Seu saldo atual de: %d\n",tmp,custo,tmp*custo,*saldo);

    }
}

int sms(int *saldo)
{   
    //variavel local
    int custoSms = 5;

    
    
    if (*saldo < custoSms)
    {
        ///variavel local
      return   printf("Seu saldo é insuficiente\n");
    }else{
        *saldo += -custoSms;
       return printf("mandou um sms no valor de %d para mandar uma mensagem.\n Seu saldo atual é de: %d\n",custoSms, *saldo);
    }
    
    
}

int main(void)
{   
    ///variavel local
    int saldo = 50;

    printf("Seu Saldo Inicial: %d\n", saldo);
    ////////////// começa a gastar kkkk /////////
    ligasao(&saldo,3);// primeiro numero saldo que vai descontar && segundo digito é tempo
    sms(&saldo);// somente o saldo para descontar
    /////////////////////////////////////////////
    printf("Seu Saldo Final: %d\n", saldo);
}