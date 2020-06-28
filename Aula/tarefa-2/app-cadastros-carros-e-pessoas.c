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


int main()
{
    int nPessoas = 0, nCarros = 0, ops, ops2;
    char nome, placa;
    struct tp_pessoas
    {
        char nome;
        char cpf;
        int valor;
        int parcelas;
    };

    struct tp_carros
    {
        char cor;
        char modelo;
        char placa;
        int ano;
    };

    struct tp_cadastro
    {
        struct tp_pessoas pessoas[2];
        struct tp_carros carros[2];
    };
    struct tp_cadastro cadastro;
    printf("************App da Concessionaria************\n");

    do
    {
        printf("********* operaçoes **************\n");
        printf("[1]cadastrar\n");
        printf("[2]comprar\n");
        printf("[3]sair\n");
        printf("***********************************\n");

        scanf("%d", &ops);
        switch (ops)
        {
        case 1:
            printf("cadastrar [1]carros  [2]pessoas\n");

            scanf("%d", &ops2);
            if (ops2 == 1)
            {
                printf("ano...........: ");
                scanf("%d", &cadastro.carros[0].ano);

                printf("modelo........: ");
                scanf("%s", &cadastro.carros[0].modelo);

                printf("cor...........: ");
                scanf("%s", &cadastro.carros[0].cor);

                printf("placa.........: ");
                scanf("%s", &cadastro.carros[0].placa);

                printf("carro cadastrado com sucesso.\n");
            }
            else if (ops2 == 2)
            {
                printf("*************** cadastro pessoas ******************\n");
                printf("nome...........: ");
                scanf("%s", &cadastro.pessoas[0].nome);

                printf("cpf........: ");
                scanf("%s", &cadastro.pessoas[0].cpf);

                printf("valor.........: ");
                scanf("%d", &cadastro.pessoas[0].valor);

                printf("parcelas...........: ");
                scanf("%d", &cadastro.pessoas[0].parcelas);

                printf("pessoa cadastrada com sucesso.\n");
            }
            break;
        case 2:
            printf("********* Area de Compra **********\n");
            printf("nome.............: \n");
            scanf("%s", &nome);

            if (nome == cadastro.pessoas[0].nome)
            {
                printf("*********cadastro encontrado ************\n");

                printf("nome..........: %s\n", cadastro.pessoas[0].nome);

                printf("cpf...........: %s\n", cadastro.pessoas[0].cpf);

                printf("valor.........: %d\n", cadastro.pessoas[0].valor);

                printf("parcelas......: %d\n", cadastro.pessoas[0].parcelas);
                printf("placa do carro desejado............: ");
                scanf("%s", &placa);
                if (placa == cadastro.carros[0].placa)
                {
                    printf("*************** cadastar carros ******************\n");
                    printf("ano...........: ");
                    scanf("%d", cadastro.carros[0].ano);

                    printf("modelo........: ");
                    scanf("%s", cadastro.carros[0].modelo);

                    printf("cor...........: ");
                    scanf("%s", cadastro.carros[0].cor);

                    printf("placa.........: ");
                    scanf("%s", cadastro.carros[0].placa);

                    printf("carro cadastrado com sucesso.\n");
                }
            }
            else
            {
                printf("********cadastro nao encontrado ************\n");
                printf("Nao tem ninguem com esse nome registrado.\n");
            }

            break;

        default:
            break;
        }
    } while (ops > 1 || ops < 3);

    return 0;
}
