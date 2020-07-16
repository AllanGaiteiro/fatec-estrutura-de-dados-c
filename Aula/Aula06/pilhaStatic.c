#include <stdio.h>
#define MAX 50

#define true 1
#define false 0
typedef int bool;

typedef int TIPOCHAVE;

typedef struct
{
    TIPOCHAVE chave;
} REGISTRO;

typedef struct
{
    REGISTRO A[MAX];
    int topo;
} PILHA;

void inicializarPilha(PILHA *p)
{
    p->topo = -1;
}
void exibirPilha(PILHA *p)
{
    printf("Pilhas: \" ");
    int i;
    for (i = p->topo; i >= 0; i--)
    {
        printf("%i", p->A[i].chave);
    }
}
////// Elemento (Push)
bool inserirElementoPilha(PILHA *p, REGISTRO reg)
{
    if (p->topo >= MAX-1) return false;
    {
        p->topo = p->topo+1;
        p->A[p->topo] = reg;
        return true;
    }
    
}

////// Elemento (Pop)
bool excluirElementoPilha(PILHA* p, REGISTRO* reg){
    if (p->topo == -1) return false;
    *reg = p->A[p->topo];
    p->topo = p->topo-1;
    return true;
}

//// ReiniciarPilha

void reinicializarPilha(PILHA* p){
    p->topo = -1;
}