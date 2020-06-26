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
int pessoas()
{
    printf("nome...........: ");
    scanf("%s", &cad_pessoas[0].nome);

    printf("cpf........: ");
    scanf("%s", &cad_pessoas[0].cpf);

    printf("valor.........: ");
    scanf("%d", &cad_pessoas[0].valor);

    printf("parcelas...........: ");
    scanf("%d", &cad_pessoas[0].parcelas);

    printf("pessoa cadastrada com sucesso.\n");
    return 0;
}
int carros()
{
            printf("ano...........: ");
        scanf("%d", &cad_carros[0].ano);

        printf("modelo........: ");
        scanf("%s", &cad_carros[0].modelo);

        printf("cor...........: ");
        scanf("%s", &cad_carros[0].cor);

        printf("placa.........: ");
        scanf("%s", &cad_carros[0].placa);

        printf("carro cadastrado com sucesso.\n");

    return 0;
}

struct tp_cad_pessoas
{
    char nome[40];
    char cpf[40];
    int valor;
    int parcelas;
} cad_pessoas[2];

struct tp_cad_carros
{
    char cor[40];
    char modelo[40];
    char placa[40];
    int ano;
}cad_carros[2];

int main()
{
    int ops;
    printf("************App da Concessionaria************\n");

    do
    {
        printf("********* operaçoes **************\n");
        printf("[1]cadastra\n");
        printf("[2]comprar\n");
        printf("[3]sair\n");
        printf("***********************************\n");

        scanf("%d", ops);
        switch (ops)
        {
        case 1:
            printf("cadastrar [1]carros  [2]pessoas");
            int ops2;
            scanf("%d", ops2);
            if (ops2 == 1)
            {
                pessoas();
            }
            else if (ops2 == 2)
            {
                carros();
            }

            break;

        default:
            break;
        }
    } while (ops != 1 && ops != 2);

    /*
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
    */

    return 0;
}