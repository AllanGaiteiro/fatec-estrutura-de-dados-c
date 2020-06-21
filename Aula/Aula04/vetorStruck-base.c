#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tp_endereco{
	
	char rua[40];
	int numero;
	char bairro[40];
	char cidade[40];
	char estado[3];
	int cep;
};

struct tp_data_nascimento{
	
	int dia;
	int mes;
	int ano;
};

struct cadastro_cliente{
	
	char nome_cliente[40];
	int telefone;
	
	struct tp_endereco endereco;
	struct tp_data_nascimento data_nascimento;
};

struct cadastro_cliente cad_cliente[2];




int main(){
	
	int i;
	
	printf("\n\n--------------CADASTRO DE CLIENTES-----------------\n\n");
	
	// Armazenando os dados do cadastro dentro da struct cad_clientes
	
	for(i=0; i<2; i++){
		
		printf("\n\nNome do cliente.....................: ");
		fflush(stdin); // limpa o buffler do teclado.
		gets(cad_cliente[i].nome_cliente);
		
		printf("\nDigite o Telefone do cliente....: ");
		scanf("%d", &cad_cliente[i].telefone);
		
		printf("\nDigite a Rua......................: ");
		fflush(stdin);
		gets(cad_cliente[i].endereco.rua);
		
		printf("\nDigite o numero..................: ");
		scanf("%d", &cad_cliente[i].endereco.numero);
		
		printf("\nBairo............................: ");
		fflush(stdin);
		gets(cad_cliente[i].endereco.bairro);
		
		printf("\nCidade............................: ");
		fflush(stdin);
		gets(cad_cliente[i].endereco.cidade);
		
		printf("\nEstado............................: ");
		fflush(stdin);
		gets(cad_cliente[i].endereco.estado);
		
		printf("\nDigite o cep............................: ");
		scanf("%d", &cad_cliente[i].endereco.cep);
		
		printf("\nDia de nascimento............................: ");
		scanf("%d", &cad_cliente[i].data_nascimento.dia);
		
		printf("\nMes de nascimento............................: ");
		scanf("%d", &cad_cliente[i].data_nascimento.mes);
		
		printf("\nAno de nascimento............................: ");
		scanf("%d", &cad_cliente[i].data_nascimento.ano);
	} // FIM DA COLETA DE DADOS.
	
	// PERCORRE O VETOR DE STRUCT CAD_CLIENTE
	
	for(i=0; i<2; i++){
		
		printf("\n\n----------------CADASTRO FINALIZADO------------------");
		printf("\n Nome.........................: %s", cad_cliente[i].nome_cliente);
		printf("\n Rua..........................: %s", cad_cliente[i].endereco.rua);
		printf("\n Numero.......................: %d", cad_cliente[i].endereco.numero);
		printf("\n Bairro.......................: %s", cad_cliente[i].endereco.bairro);
		printf("\n Cidade.......................: %s", cad_cliente[i].endereco.cidade);
		printf("\n Estado.......................: %s", cad_cliente[i].endereco.estado);
		printf("\n Cep..........................: %d", cad_cliente[i].endereco.cep);
		printf("\n Dia Nasc.....................: %d", cad_cliente[i].data_nascimento.dia);
		printf("\n Mes Nasc.....................: %d", cad_cliente[i].data_nascimento.mes);
		printf("\n Ano Nasc.....................: %d", cad_cliente[i].data_nascimento.ano);
		printf("\n\n-----------------------------------------------------");
	}
	
	
	system("pause");
	return 0;
}