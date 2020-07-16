#include <stdio.h>


	
struct ingredientes { //ate 10 ingredientes por trufa
char nome[40];
float quantidade;
};

struct trufas {
	char sabor[40];
	char curso[40]; //curso???
	struct ingredientes ingredienteTrufa[10];
};



int main (void) {
	int quantidadeTrufas, quantidadeIngredientes;
	
	printf("Quantas trufas ira cadastrar?\n");
	scanf("%i", &quantidadeTrufas);
	struct trufas trufa[quantidadeTrufas];
	
	
	for (int a = 0; a < quantidadeTrufas; a++) {
		printf("----------CADASTRO DE TRUFA #%i---------\n", a+1);
						
		printf("SABOR: ");
		fflush(stdin);
		fgets(trufa[a].sabor, 40, stdin);
		
		printf("CURSO: ");		
		fflush(stdin);
		fgets(trufa[a].curso, 40, stdin);
		
		do {
		
		printf("Quantos ingredientes na trufa? - MAX: 10\n");
		scanf("%i", &quantidadeIngredientes);
		} while (quantidadeIngredientes > 10);
		
		for (int i = 0; i < quantidadeIngredientes; i++) {
			printf("-------INGREDIENTE #%i-------\n", i + 1);
			
			printf("nome: ");		
			fflush(stdin);
			fgets(trufa[a].ingredienteTrufa[i].nome, 40, stdin);
			
			
			printf("quantidade: ");		
			scanf("%f", &trufa[a].ingredienteTrufa[i].quantidade);
		}
		
	}
	
	printf("-------------------------------\n");
	printf("===========RETORNO==========\n\n");
	for (int z = 0; z < quantidadeTrufas; z++) {
		printf("===========TRUFA #%i==========\n", z + 1);
		printf("SABOR %i: %s", z+1, trufa[z].sabor);
		printf("CURSO: %s", trufa[z].curso);
		for (int j = 0; j < quantidadeIngredientes; j++){
			printf("INGREDIENTE # %i: %s", j + 1, trufa[z].ingredienteTrufa[j].nome);
			printf("QUANTIDADE: %f\n", trufa[z].ingredienteTrufa[j].quantidade);
			printf("----------------------\n");
		}
		printf("-----------------------\n");
	}

	
}
