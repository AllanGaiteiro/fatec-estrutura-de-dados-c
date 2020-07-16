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

struct tp_pessoas
{
    char nome[40];
    char cpf[40];
    int valor;
    int parcelas;
};

struct tp_carros
{
    char cor[40];
    char modelo[40];
    char placa[40];
    int ano;
};

struct tp_cadastro
{
    struct tp_pessoas pessoas[100];
    struct tp_carros carros[100];
};

void cadCarros(struct tp_carros *carros, int *cadC)
{
    printf("ano...........: ");
    fflush(stdin);
    scanf("%d", &carros[*cadC].ano);
    getchar();
    printf("modelo........: ");
    fflush(stdin);
    fgets(carros[*cadC].modelo, 40, stdin);

    printf("cor...........: ");
    fflush(stdin);
    fgets(carros[*cadC].cor, 40, stdin);

    printf("placa.........: ");
    fflush(stdin);
    fgets(carros[*cadC].placa, 40, stdin);

    printf("carro cadastrado com sucesso.\n");
    
    *cadC = *cadC + 1;
}
void cadPessoas(struct tp_pessoas *pessoas, int *cadP)
{
    printf("*************** cadastro pessoas ******************\n");
    printf("nome...........: ");
    fflush(stdin);
    fgets(pessoas[*cadP].nome, 40, stdin);
    printf("cpf........: ");
    fflush(stdin);
    fgets(pessoas[*cadP].cpf, 40, stdin);

    printf("valor.........: ");
    fflush(stdin);
    scanf("%d", &pessoas[*cadP].valor);
    getchar();

    printf("parcelas...........: ");
    fflush(stdin);
    scanf("%d", &pessoas[*cadP].parcelas);
    getchar();

    printf("pessoa cadastrada com sucesso.\n");
    *cadP = *cadP + 1;

}

void compras(struct tp_pessoas *pessoas, struct tp_carros *carros, int *cadC, int *cadP)
{
    char nomeGuard[40], placaGuard[40];
    int i = 0, j = 0, encontrouPessoa = 0, encontrouCarro = 0;
    int maxP = *cadP;

    printf("********* Area de Compra **********\n");
    printf("nome.............: ");
    fflush(stdin);
    fgets(nomeGuard, 40, stdin);
	
    for (i = 0; i < maxP; i++)
    {

        if (strcmp(pessoas[i].nome, nomeGuard) == 0)
        {
            encontrouPessoa = 1;

            printf("*********registro encontrado ************\n");

            printf("nome..........: %s\n", pessoas[i].nome);

            printf("cpf...........: %s\n", pessoas[i].cpf);

            printf("valor.........: %d\n", pessoas[i].valor);

            printf("parcelas......: %d\n", pessoas[i].parcelas);

            printf("placa do carro desejado............: ");
            fgets(placaGuard, 40, stdin);
            for (j = 0; i < *cadC; i++)
            {
                if (strcmp(placaGuard, carros[i].placa) == 0)
                {
                    encontrouCarro = 1;
                    printf("*************** registro carros ******************\n");
                    printf("ano...........: %d", carros[i].ano);

                    printf("modelo........: %s", carros[i].modelo);

                    printf("cor...........: %s", carros[i].cor);

                    printf("placa.........: %s", carros[i].placa);

                    printf("\nVenda  Concluida.\n");
                }
            }
        }
    }
    if (encontrouPessoa == 0)
    {

        printf("********cadastro pessoa nao encontrado ************\n");
        printf("Nao tem ninguem com esse nome registrado.\n");
    }
    else if (encontrouCarro == 0)
    {

        printf("********cadastro carro nao encontrado ************\n");
        printf("Nao tem nenhum Carro com essa placa.\n");
    }
}

int main(void)
{
    int ops, ops2;
    int cadP;
    int cadC;

    struct tp_cadastro cadastro;
    printf("************App da Concessionaria************\n");

    do
    {
        printf("********* operaçoes **************\n");
        printf("[1]cadastrar\n");
        printf("[2]comprar\n");
        printf("[3]sair\n");
        printf("***********************************\n");
        fflush(stdin);
        scanf("%d", &ops);
        getchar();
        switch (ops)
        {
        case 1:
            printf("cadastrar [1]carros  [2]pessoas\n");
            fflush(stdin);
            scanf("%d", &ops2);
            getchar();
            if (ops2 == 1)
            {
                cadCarros(&cadastro.carros, &cadC);
            }
            else if (ops2 == 2)
            {
                cadPessoas(&cadastro.pessoas, &cadP);
            }
            break;
        case 2:
            /////struct tp_pessoas *pessoas, struct tp_carros *carros, int *cadC, int *cadP
            compras(&cadastro.pessoas, &cadastro.carros, &cadC, &cadP);
            break;

        default:
            break;
        }
    } while (ops == 1 || ops == 2);

    return 0;
}
