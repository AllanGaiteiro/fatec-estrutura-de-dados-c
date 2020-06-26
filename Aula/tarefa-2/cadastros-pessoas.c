#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
2) Desenvolva uma aplicação para cadastrar cliente que fará um crédito em até 12 vezes. Insira na estrutura informações pertinentes ao cliente.
- Nome
- CPF
- Valor
- Números Vezes 
*/

struct tp_cad_pessoas
{
    char nome[40];
    char cpf[40];
    int valor;
    int parcelas;
}cad_pessoas[2];


int main()
{
    printf("............cadastro pessoas..............\n");

    printf("..............cadastrar pessoas..............\n ");
    for (int i = 0; i < 2; i++)
    {
        printf("nome...........: ");
        scanf("%s", &cad_pessoas[i].nome);

        printf("cpf........: ");
        scanf("%s", &cad_pessoas[i].cpf);

        printf("valor.........: ");
        scanf("%d", &cad_pessoas[i].valor);

        printf("parcelas...........: ");
        scanf("%d", &cad_pessoas[i].parcelas);

        printf("pessoa cadastrada com sucesso.\n");
    }

    printf("\n.............pessoas cadastradas..............\n ");
    for (int i = 0; i < 2; i++)
    {
        printf("...........cadastro de pessoa numero[%d]...........\n ",i);

        printf("nome...........: %s\n", cad_pessoas[i].nome);        

        printf("cpf........: %s\n", cad_pessoas[i].cpf);

        printf("valor.........: %d reais\n", cad_pessoas[i].valor);
        int valorParcela = cad_pessoas[i].valor/cad_pessoas[i].parcelas;

        printf("parcelas...........: %d parcelas de  %d reais\n", cad_pessoas[i].parcelas, valorParcela);
    }
    

    return 0;
}