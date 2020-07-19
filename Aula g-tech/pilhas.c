#include <stdio.h>

#define MAX 10

int inicio, fim;
int pilha[MAXSLOT];

void push(int x);
int pop();

int pilhaVazia();
int pilhaCheia();

int main()
{
    inicio = 0;
    fim = 0;
    push(12);
    push(23);

    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    return 0;
}

int pilhaVazia()
{
    return (inicio == fim);
}

int pilhaCheia()
{
    return (fim == MAXSLOT);
}

void push(int x)
{
    if (!pilhaCheia())
    {
        printf("Inserindo %d\n", x);
        pilha[fim++] = x;
    }
    else
    {
        printf("pilha esta cheia!\n");
    }
}

int pop()
{
    int aux;
    if (!pilhaVazia())
    {
        aux = pilha[fim - 1];
        fim--;
        return aux;
    }
    else
    {
        printf("pilha  Vazia!\n");
        return -1;
    }
}