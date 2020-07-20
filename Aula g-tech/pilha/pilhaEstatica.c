#include <stdio.h>

#define MAX 5
//#define PESO 50

struct tp_pilha
{

    int item[MAXSLOT];
    int topo;
}pilha;

void Contrutos()
{
    pilha.topo = 0;
}

int Pilha_Vazia()
{
    if (pilha.topo == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Pilha_Cheia()
{
    if (pilha.topo == MAXSLOT)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int n)
{
    pilha.item[pilha.topo++] = n;
    //printf("Pilha: %d\n", auxPilha);
}
void pop()
{
    printf("excluindo: %d\n", pilha.item[pilha.topo - 1]);
    pilha.topo--;
}
int main()
{
    int ops;
    printf("*****Programa da PilhaStatica*******\n");

    do
    {
        printf("[1]Push [2]Pop [3]Sair\n");
        fflush(stdin);
        scanf("%d", &ops);
        getchar();
        switch (ops)
        {
        case 1:
            if (Pilha_Cheia() == 1)
            {
                printf("\nPilha ja cheia...\n\n");
            }
            else
            {
                int n;
                printf("digite um numero: ");
                fflush(stdin);
                scanf("%d", &n);
                getchar();
                printf("Inserido o Numero: %d\n", n);
                push(n);
            }

            break;
        case 2:
            if (Pilha_Vazia() == 1)
            {
                printf("\nPilha ja vazia\n\n");
            }
            else
            {

                pop();
            }
            break;

        default:
            break;
        }
        int i;
        printf("Pilha: ");
        for (i = 0; i < pilha.topo; i++)
        {
            printf("%d /", pilha.item[i]);
        }
        printf("\n \n");

    } while (ops != 3);

    return 0;
}
