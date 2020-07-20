#include <stdio.h>
#include <stdlib.h>

#define MAXTAM 5

int frente, tras;
int lista[MAXTAM];

void contrutor()
{
    frente = 0;
    tras = -1;
}

int lista_vazia()
{

    if (frente > tras)
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

    if (tras == MAXTAM)
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
    return tras + 1;
}

int Lista_inserir_inicio(int e)
{
    if (lista_cheia() == 1)
    {
        return printf("\nLista Cheia\n");
    }
    else
    {
        int i;
        int aux[tras];
        for (i = 0; i < tras; i++)
        {
            aux[i] = lista[i];
        }
        lista[0] = e;
        tras++;
        for (i = 1; i < tras; i++)
        {
            lista[i] = aux[i - 1];
        }
    }
}

int Lista_inserir_fim(int e)
{
    if (lista_cheia() == 1)
    {
        return printf("\nLista Cheia\n");
    }
    else
    {
        lista[tras] = e;
        tras++;
    }
}

int print_list (){
    printf("Lista ");
    int i;
    for ( i = 0; i < tras; i++)
    {
        printf(" - %d", lista[i]);
    }
    printf("\n");
}

int main()
{
    int n, ops;
    do
    {
        printf("Lista inserir [1]Inicio [2]Fim [3]Sair");
        fflush(stdin);
        scanf("%d", &ops);

        if (ops == 1)
        {
            printf("digite o numero numero:");
            fflush(stdin);
            scanf("%d", &n);
            getchar();
            Lista_inserir_inicio(n);
            print_list ();
        }
        else if (ops == 2)
        {
            printf("digite o numero numero:");
            fflush(stdin);
            scanf("%d", &n);
            getchar();
            Lista_inserir_fim(n);
            print_list ();
        }
        else if (ops == 3)
        {
            printf("\nTenha um Bom Dia!!!\n");
        }
        else
        {
            printf("\nopçao invalida!!!\n");
        }
        
        

    } while (ops != 3);
}