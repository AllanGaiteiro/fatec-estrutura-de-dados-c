#include <stdio.h>
#include <stdlib.h>

#define MAXTAM 5

struct tp_lista
{
    int frente, tras;
    int pessoa[MAXTAM];
} lista;

void contrutor()
{
    lista.frente = 0;
    lista.tras = 0;
}

int lista_vazia()
{

    if (lista.frente == lista.tras)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int lista_cheia()
{

    if (lista.tras == MAXTAM)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int lista_tamanho()
{
    return lista.tras + 1;
}

int push_inicio(int e)
{
    if (lista_cheia() == 1)
    {
        return printf("\nLista Cheia\n");
    }
    else
    {
        int i;
        int aux[lista.tras];
        for (i = 0; i < lista.tras; i++)
        {
            aux[i] = lista.pessoa[i];
        }
        lista.pessoa[0] = e;
        lista.tras++;
        for (i = 1; i < lista.tras; i++)
        {
            lista.pessoa[i] = aux[i - 1];
        }
    }
}

int push_fim(int e)
{
    if (lista_cheia() == 1)
    {
        return printf("\nLista Cheia\n");
    }
    else
    {
        lista.pessoa[lista.tras] = e;
        lista.tras++;
    }
}

int pop_inicio()
{
    if (lista_vazia() == 1)
    {
        return printf("\nLista Vazia\n");
    }
    else
    {
        int i;
        int aux[lista.tras];
        for (i = 1; i < lista.tras; i++)
        {
            aux[i] = lista.pessoa[i];
            lista.pessoa[i - 1] = aux[i];
        }
        lista.tras--;
    }
}

int pop_fim()
{
    if (lista_vazia() == 1)
    {
        return printf("\nLista Vazia\n");
    }
    else
    {
        lista.pessoa[lista.tras] = NULL;
        lista.tras--;
    }
}

int print_list()
{
    printf("Lista ");
    int i;
    for (i = 0; i < lista.tras; i++)
    {
        printf(" - %d", lista.pessoa[i]);
    }
    printf("\n");
}

void inserir(int ops)
{
    int n;
    printf("digite o numero numero:");
    fflush(stdin);
    scanf("%d", &n);
    getchar();
    (ops == 1) ? push_inicio(n) : push_fim(n);
    print_list();
}
void remover(int ops)
{
    (ops == 1) ? pop_inicio() : pop_fim();
    print_list();
}

int main()
{
    int ops, menu;
    do
    {
        printf("..............Programa Lista.............\n");
        printf("menu:     [1]inserir [2]remover [3]sair\n");
        fflush(stdin);
        scanf("%d", &menu);
        getchar();
        switch (menu)
        {
        case 1:
            printf("inserir [1]Inicio [2]Fim\n");
            fflush(stdin);
            scanf("%d", &ops);
            getchar();
            inserir(ops);
            break;

        case 2:
            printf("remover [1]Inicio [2]Fim\n");
            fflush(stdin);
            scanf("%d", &ops);
            getchar();
            remover(ops);
            break;

        case 3:
            printf("\nTenha um Bom Dia!!!\n");
            break;
        default:
            printf("\nopçao invalida!!!\n");
            break;
        }

    } while (menu != 3);
}