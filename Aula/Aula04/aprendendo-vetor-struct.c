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
    printf("...........Cadastro dos clientees...............\n");

    for (i = 0; i < 2; i++)
    {
        printf("Informaçoes pessoais de cliente.................\n");

        printf("nome_cliente: ");
        /*fflush(stdin);
        gets(cad_cliente[i].nome_cliente);
        */
        scanf("%s",&cad_cliente[i].nome_cliente);

        printf("Telefone: ");
        scanf("%d", &cad_cliente[i].telefone);


        printf("Data de data_nascimentoimento do cliente.................\n");
        printf("Dia: ");
        scanf("%d", &cad_cliente[i].data_nascimento.dia);
        printf("Mes: ");
        scanf("%d", &cad_cliente[i].data_nascimento.mes);
        printf("Ano: ");
        scanf("%d", &cad_cliente[i].data_nascimento.ano);

        printf("Endereço do d_cliente.................\n");

        printf("Estado: ");
        /*fflush(stdin);
        gets(cad_cliente[i].endereco.estado);
        */
        //fgets(cad_cliente[i].endereco.estado, 3, stdin);
        scanf("%s", &cad_cliente[i].endereco.estado);

        printf("Cidade: ");
        /*fflush(stdin);
        gets(cad_cliente[i].endereco.cidade);
        */
        //fgets(cad_cliente[i].endereco.cidade, 40, stdin);
        scanf("%s", &cad_cliente[i].endereco.cidade);
        printf("Bairro: ");
        /*fflush(stdin);
        gets(cad_cliente[i].endereco.bairro);
        */
        //fgets(cad_cliente[i].endereco.bairro, 40, stdin);
        scanf("%s", &cad_cliente[i].endereco.cidade );
        printf("Rua: ");
        /*fflush(stdin);
        gets(cad_cliente[i].endereco.rua);
        */
        //fgets(cad_cliente[i].endereco.rua, 40, stdin);
        scanf("%s", &cad_cliente[i].endereco.cidade);
        printf("Numero: ");
        scanf("%d", &cad_cliente[i].endereco.numero);
        printf("..............Cadastro Concluido.................\n");
    } // fim coleta

    for (i = 0; i < 2; i++)
    {
        n = i + 1;

        printf("............. Dados do cliente[0%d]..........\n", n);
        printf("nome do cliente: %s \n", cad_cliente[i].nome_cliente);
        printf("Telefone: %d\n", cad_cliente[i].telefone);
        printf("data de nascimento: %d/%d/%d \n", cad_cliente[i].data_nascimento.dia, cad_cliente[i].data_nascimento.mes, cad_cliente[i].data_nascimento.ano);
    }

    return 0;
}
