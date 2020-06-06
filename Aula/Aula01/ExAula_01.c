#include <stdio.h>
#include <stdbool.h>

/// Vasiaveis Globais
int saldo = 50;
bool saldoInsuficiente = false;

int ligasao(int a)
{
    ///variavel local
    int custo = 10;
    printf("entrou em uma ligaçao\n");
    saldo += -(custo * a);
    if (saldo < custo)
    {
        saldoInsuficiente = true;
        return printf("Seu saldo é insuficiente\n");
    }
    
    return printf("fim ligaçao");
}

int sms()
{
    printf("mando um sms\n");
    saldo += -5;
    printf("programador(saldo menos dentro do sms: %d )", saldo);
    if (saldo < 4)
    {
        ///variavel local
        saldoInsuficiente = true;
        return printf("Seu saldo é insuficiente\n");
    }
    
    return printf("fim sms");
}

int main(void)
{   
    ///variavel local
    int acoes = 0;

    ////////////// começa a gastar kkkk /////////
    printf("/////////////////////////////////////////////////\n");
    printf("///////////////////// Vivo //////////////////////\n");
    printf("/////////////////////////////////////////////////\n");
    printf("\n");
    printf("Seu saldo é de: %d\n", saldo);

    do
    {   
        printf("Ações:");
        printf("(1)ligar  (2)sms (0)sair \n");
        scanf("%d", acoes);/// %s para char
        
        switch (acoes)
        {
        case 1:
            printf("passo por aki ligaçao");
            ligasao(1);
            break;
        case 2:
            printf("passo por aki sms");
            sms();
            break;
        
        default:
            break;
        }
        
        printf("\n");
        printf("Seu Saldo: %d\n", saldo);

    } while (!saldoInsuficiente || acoes == 0);

    printf("Seu Saldo: %d\n", saldo);
}