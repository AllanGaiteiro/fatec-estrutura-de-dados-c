#include <stdio.h>

#define MAX_SLOT 3
#define MAX_PILHAS 4
//#define PESO 50

struct tp_pilha
{

    int item[MAX_SLOT];
    int topo;
};

struct tp_porto
{
    struct tp_pilha pilha[MAX_PILHAS];
    int topoPorto
} porto;

void Contrutos()
{
    int i;
    for (i = 0; i < MAX_PILHAS; i++)
    {
        porto.pilha[i].topo = 0;
    }
}

int Pilha_Vazia(int p)
{
    if (porto.pilha[p].topo == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Pilha_Cheia(int p)
{
    if (porto.pilha[p].topo == MAX_SLOT)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int n, int p)
{
    porto.pilha[p].item[porto.pilha[p].topo++] = n;
    //printf("Pilha: %d\n", auxPilha);
}

void pop(int p)
{
    printf("excluindo: %d\n", porto.pilha[p].item[porto.pilha[p].topo - 1]);
    porto.pilha[p].topo--;
}

int main()
{
    int ops;
    printf("*****Programa da PilhaStatica*******\n");

    do
    {
        int p;
        printf("[1]Push [2]Pop [3]Sair\n");
        fflush(stdin);
        scanf("%d", &ops);
        getchar();
        switch (ops)
        {
        case 1:
            printf("Digite a pilha desej[1 a 4]:");

            fflush(stdin);
            scanf("%d", &p);
            getchar();
            p--;

            if (Pilha_Cheia(p) == 1)
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
                push(n, p);
            }

            break;
        case 2:
            printf("Digite a pilha desej[1 a 4]:");

            fflush(stdin);
            scanf("%d", &p);
            p--;
            getchar();
            if (Pilha_Vazia(p) == 1)
            {
                printf("\nPilha ja vazia\n\n");
            }
            else
            {

                pop(p);
            }
            break;

        default:
            break;
        }
        int i;
        for (i = 0; i < MAX_PILHAS; i++)
        {
            printf("Pilha[%d]: ", i + 1);
            int j;
            for (j = 0; j < porto.pilha[i].topo ; j++)
            {
                printf("%d /", porto.pilha[i].item[j]);
            }
            printf("\n \n");
        }

    } while (ops != 3);

    return 0;
}
