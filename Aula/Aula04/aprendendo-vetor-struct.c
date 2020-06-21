// usand struct dentro de struct
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct tp_endereco
{
    char rua[40];
    int numero;
    char bairro[40];
    char cidade[40];
    char estado[3];
    int cep;
};

struct tp_data_nascimento
{
    int dia;
    int mes;
    int ano;
};

struct cadastro_cliente
{
    char nome_cliente[40];
    int telefone;

    struct tp_endereco endereco;
    struct tp_data_nascimento data_nascimento;
} cad_cliente[2];

//Proograma principa
int main()
{
    int n;
    int i;
    printf("\n...........Cadastro dos clientees...............\n");

    for (i = 0; i < 2; i++)
    {
        printf("\nInformaçoes pessoais de cliente.................\n");

        printf("nome_cliente: ");
        /*fflush(stdin);
        gets(cad_cliente[i].nome_cliente);
        */
        fgets(cad_cliente[i].nome_cliente, 40, stdin);
        printf("Telefone: ");
        scanf("%d", &cad_cliente[i].telefone);
        printf("\n...............................\n");

        printf("\n Data de data_nascimentoimento do cliente.................\n");
        printf("Dia: ");
        scanf("%d", &cad_cliente[i].data_nascimento.dia);
        printf("Mes: ");
        scanf("%d", &cad_cliente[i].data_nascimento.mes);
        printf("Ano: ");
        scanf("%d", &cad_cliente[i].data_nascimento.ano);

        printf("\nEndereço do d_cliente.................\n");

        printf("\nEstado: ");
        /*fflush(stdin);
        gets(cad_cliente[i].endereco.estado);
        */
        //fgets(cad_cliente[i].endereco.estado, 3, stdin);
        scanf("%s", cad_cliente[i].endereco.estado);

        printf("\nCidade: ");
        /*fflush(stdin);
        gets(cad_cliente[i].endereco.cidade);
        */
        //fgets(cad_cliente[i].endereco.cidade, 40, stdin);
        scanf("%s", cad_cliente[i].endereco.cidade);
        printf("\nBairro: ");
        /*fflush(stdin);
        gets(cad_cliente[i].endereco.bairro);
        */
        //fgets(cad_cliente[i].endereco.bairro, 40, stdin);
        scanf("%s", cad_cliente[i].endereco.cidade );
        printf("\nRua: ");
        /*fflush(stdin);
        gets(cad_cliente[i].endereco.rua);
        */
        //fgets(cad_cliente[i].endereco.rua, 40, stdin);
        scanf("%s", cad_cliente[i].endereco.cidade);
        printf("\nNumero: ");
        scanf("%d", &cad_cliente[i].endereco.numero);
        printf("\n..............Cadastro Concluido.................\n");
    } // fim coleta

    for (i = 0; i < 2; i++)
    {
        n = i + 1;

        printf("............. Dados do cliente[0%d]..........\n", n);
        printf("nome_cliente do cad_cliente: %s \n", cad_cliente[i].nome_cliente);
        printf("Telefone do cad_clientee: %d\n", cad_cliente[i].telefone);
        printf("data de data_nascimentoimento: %d/%d/%d \n", cad_cliente[i].data_nascimento.dia, cad_cliente[i].data_nascimento.mes, cad_cliente[i].data_nascimento.ano);
    }

    return 0;
}
