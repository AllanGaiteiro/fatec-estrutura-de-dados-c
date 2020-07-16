#include <stdio.h>

struct disciplinas {
	char nomeMateria[40];
	char diaDaSemana[40];
	char horario[10];
};

struct cadastroAluno {
	char nomeAluno[40];
	char ra[10];
	char curso[40];
	struct disciplinas disciplinasAluno[7]; //vetor de disciplinas
} aluno;
	
int main (void) {
	int quantidadeAlunos = 0;
	
	
	printf("Quandos alunos deseja cadastrar?\n");
	scanf("%d", &quantidadeAlunos);
	struct cadastroAluno aluno[quantidadeAlunos];
	
	for (int a = 0; a < quantidadeAlunos; a++) {
		printf("----------CADASTRO DE ALUNO #%i----------\n\n", a+1);
		
		printf("NOME ALUNO %i: ", a+1);
		fflush(stdin);
		fgets(aluno[a].nomeAluno, 40, stdin);
		
		printf("RA: ");
		fflush(stdin);
		fgets(aluno[a].ra, 10, stdin);
				
		printf("CURSO: ");
		fflush(stdin);
		fgets(aluno[a].curso, 40, stdin);
				
		for (int i = 0; i < 7; i++) { //sao previstas 7 por aluno
			printf("-----DISCIPLINA %i-----\n", i + 1);
			
			printf("NOME DISCIPLINA: ");
			fflush(stdin);
			fgets(aluno[a].disciplinasAluno[i].nomeMateria, 40, stdin);
			
			printf("DIA DA SEMANA: ");
			fflush(stdin);
			fgets(aluno[a].disciplinasAluno[i].diaDaSemana, 40, stdin);
			
			printf("HORARIO: ");
			fflush(stdin);
			fgets(aluno[a].disciplinasAluno[i].horario, 10, stdin);
			
			printf("===================================\n");
		}
	}
	
	printf("--------------RETORNO----------------\n");
	for (int a = 0; a < quantidadeAlunos; a++) {
		printf("ALUNO %i: %s", a+1, aluno[a].nomeAluno);
		printf("RA: %s", aluno[a].ra);
		printf("CURSO: %s", aluno[a].curso);
		printf("DISCIPLINAS MATRICULADAS: \n");
		printf("-------------------------\n");
		for (int j = 0; j < 7; j++){
			printf("DISCIPLINA: %s", aluno[a].disciplinasAluno[j].nomeMateria);
			printf("DIA DA SEMANA: %s", aluno[a].disciplinasAluno[j].diaDaSemana);
			printf("HORARIO: %s", aluno[a].disciplinasAluno[j].horario);
			printf("----------------------\n");
		}
	}
	//A - criar uma funcao de cadastro que ocorra a passagem por referencia
	//B - funcao para exibir o cadastro em que ocorra a passagem por valor
	//C - permitir o cadastro de n alunos, com n definido pelo usuario
	
}
