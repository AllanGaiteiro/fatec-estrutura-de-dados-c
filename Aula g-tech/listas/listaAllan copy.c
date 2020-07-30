#include <stdio.h>
#include <stdlib.h>

#define MAXTAM 5

struct tp_pessoa
{
    char nome[40];
};


struct tp_aux
{
    char nome[40];
};
struct tp_lista
{
    int frente, tras;
    struct tp_aux aux[MAXTAM];
    struct tp_pessoa pessoa[MAXTAM];
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

int push_inicio(char *p)
{
    
    if (lista_cheia() == 1)
    {
        return printf("\nLista Cheia\n");
    }
    else
    {
        int i;
        for (i = 0; i < lista.tras; i++)
        {
            lista.aux[i].nome[0] = lista.pessoa[i].nome;
        }
        lista.pessoa[0].nome = *p;
        lista.tras++;
        for (i = 1; i < lista.tras; i++)
        {
            lista.pessoa[i].nome[0] = lista.aux[i - 1].nome;
        }
    }
}

int push_fim(char *p)
{

    if (lista_cheia() == 1)
    {
        return printf("\nLista Cheia\n");
    }
    else
    {
        lista.pessoa[lista.tras].nome[0] = *p;
        printf("%s",lista.pessoa[lista.tras].nome);
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
        for (i = 1; i < lista.tras; i++)
        {
            lista.aux[i].nome[40] = lista.pessoa[i].nome;
            lista.pessoa[i - 1].nome[40] = lista.aux[i].nome;
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
        lista.tras--;
    }
}

int print_list()
{
    printf("Lista ");
    int i;
    for (i = 0; i < lista.tras; i++)
    {
        printf(" - %s", lista.pessoa[i].nome[0]);
    }
    printf("\n");
}

void inserir(int ops)
{
    char nome[40];
    printf("digite o nome:");
    fgets(nome, 40 , stdin );
    getchar();
    
    (ops == 1) ? push_inicio(&nome) : push_fim(&nome);
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

    printf("........Hospital Sao Luiz..........\n\n");
    do
    {
        printf("..............Lista Pacientes.............\n");
        printf("                   menu\n");
        printf("          [1]Entrada Paciente\n          [2]Saida Paciente\n             [3]Desligar\n");
        printf("..........................................\n\n");
        fflush(stdin);
        scanf("%d", &menu); // escolhe uma das opçoes
        getchar();
        switch (menu)
        {
        case 1: ///// entrada ou pu
            printf("Entrada Paciente.....\nStatus:  [1]Urgente [2]Comun\n");
            fflush(stdin);
            scanf("%d", &ops);
            getchar();
            inserir(ops);
            break;

        case 2:
            printf("Saida Paciente.....\nStatus:  [1]Urgente [2]Comun");
            fflush(stdin);
            scanf("%d", &ops);
            getchar();
            remover(ops);
            break;

        case 3:
            printf("\nEncerrando o programa......\n");
            break;
        default:
            printf("\n........................\n");
            printf("\n erro: Opçao invalida!!!\n");
            printf("\n........................\n");
            break;
        }
    } while (menu != 3);
}
