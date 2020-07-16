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
	};

int main (void) {

	
	struct cadastroAluno *alunoPtr, aluno;
	alunoPtr = &aluno;
	printf("----------CADASTRO DE ALUNO----------\n\n");
	
	printf("NOME ALUNO: ");
	fflush(stdin);
	fgets(&alunoPtr->nomeAluno, 40, stdin);
	
	printf("RA: ");
	fflush(stdin);
	fgets(&alunoPtr->ra, 10, stdin);
			
	printf("CURSO: ");
	fflush(stdin);
	fgets(&alunoPtr->curso, 40, stdin);
			
	for (int i = 0; i < 7; i++) { //sao previstas 7 por aluno
		printf("-----DISCIPLINA %i-----\n", i + 1);
		
		printf("NOME DISCIPLINA: ");
		fflush(stdin);
		fgets(&alunoPtr->disciplinasAluno[i].nomeMateria, 40, stdin);
		
		printf("DIA DA SEMANA: ");
		fflush(stdin);
		fgets(&alunoPtr->disciplinasAluno[i].diaDaSemana, 40, stdin);
		
		printf("HORARIO: ");
		fflush(stdin);
		fgets(&alunoPtr->disciplinasAluno[i].horario, 10, stdin);
		
		printf("===================================\n");
	}
	
	printf("--------------RETORNO----------------\n");
	printf("ALUNO: %s", &alunoPtr->nomeAluno);
	printf("RA: %s", &alunoPtr->ra);
	printf("CURSO: %s", &alunoPtr->curso);
	printf("DISCIPLINAS MATRICULADAS: \n");
	printf("-------------------------\n");
	for (int j = 0; j < 7; j++){
		printf("DISCIPLINA: %s", &alunoPtr->disciplinasAluno[j].nomeMateria);
		printf("DIA DA SEMANA: %s", &alunoPtr->disciplinasAluno[j].diaDaSemana);
		printf("HORARIO: %s", &alunoPtr->disciplinasAluno[j].horario);
		printf("----------------------\n");
	}
	
	//A - criar uma funcao de cadastro que ocorra a passagem por referencia
	//B - funcao para exibir o cadastro em que ocorra a passagem por valor
	//C - permitir o cadastro de n alunos, com n definido pelo usuario
	
}
