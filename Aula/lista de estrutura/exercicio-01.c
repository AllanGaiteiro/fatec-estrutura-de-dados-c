#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
1) Alunos.

Desenvolva uma aplicação para cadastrar Alunos.

Crie uma estrutura para cadastro de alunos (nome, RA, curso e um vetor de disciplinas)

Crie uma estrutura para disciplinas que o aluno frequenta (nome da disciplina, dia da semana e horário da disciplina frequentada). É previsto 7 disciplinas por aluno.

1a) Crie uma função de cadastro em que ocorra a passagem por referência.

1b) Crie uma função para exibir o cadastro em que ocorra a passagem por valor.

1c) Permitir o cadastro de n alunos, onde n será definido pelo usuário.
*/
struct tp_diciplina
{
    char nome[40];
    char diaSeman[10];
    int inicio;
    int termino;
} diciplina[7];

struct tp_cad_alunos
{
    char nome[40];
    char ra[12];
    char curso[40];
    struct tp_diciplina diciplina[7];
};

void cad(struct tp_cad_alunos *cad_aluno, int nAlunos)
{
	
    int i, j;
    printf("********Registro de Alunos************");
    for (i = 0; i < nAlunos; i++)
    {

        printf("********Registro de Alunos[%d]************");
        printf("Nome.........: ");
        fflush(stdin);
        fgets(cad_aluno[i].nome, 40, stdin);
        printf("RA.........: ");
        fflush(stdin);
        fgets(cad_aluno[i].ra, 12, stdin);
        printf("curso.........: ");
        fflush(stdin);
        fgets(cad_aluno[i].curso, 40, stdin);
        printf("diciplinas frequentadas******\n");
        for (j = 0; j < 3; j++)
        {
            printf("\nnome.........: ");
            fflush(stdin);
            fgets(cad_aluno[i].diciplina[j].nome, 40, stdin);
            printf("\nDia.........: ");
            fflush(stdin);
            fgets(cad_aluno[i].diciplina[j].diaSeman, 10, stdin);
            printf("\nInicia.........: ");
            fflush(stdin);
            scanf("%d", &cad_aluno[i].diciplina[j].inicio);
            printf("\nnTermina.........: ");
            scanf("%d", &cad_aluno[i].diciplina[i].termino);
        }
    }

    ////// texte
}
void regist(struct tp_cad_alunos *cad_aluno, int nAlunos)
{
    int i, j;

    printf("************Alunos Cadastrados******************");
    for (i = 0; i < nAlunos; i++)
    {
        int n = i + 1;
        printf("******************aluno[%d]***************", i);
        printf("Nome.........: %s", cad_aluno[i].nome);
        printf("RA.........: %s", cad_aluno[i].ra);
        printf("curso.........: %s", cad_aluno[i].curso);
        printf("diciplinas frequentadas******\n");
        for (j = 0; j < 3; j++)
        {
            printf("\nnome.........: %s", cad_aluno[i].diciplina[j].nome);
            printf("\nDia.........: %s", cad_aluno[i].diciplina[j].diaSeman);
            printf("\nInicia.........: %d", cad_aluno[i].diciplina[j].inicio);
            printf("\nnTermina.........: %d", cad_aluno[i].diciplina[j].termino);
        }
    }
}

int main(void)
{
    int nAlunos;

    printf("quantidade de Aluno");
    scanf("%d", &nAlunos);
    struct tp_cad_alunos cad_aluno[nAlunos];
    print("%d", nAlunos);
	//cad(&cad_aluno, nAlunos);
    //regist(&cad_aluno,nAlunos);

    return 0;
}

