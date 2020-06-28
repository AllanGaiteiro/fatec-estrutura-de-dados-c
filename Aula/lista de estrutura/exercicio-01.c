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
    char nome;
    char diaSeman;
    int inicio;
    int termino;
} diciplina[7];

struct tp_cad_alunos
{
    char nome;
    char ra;
    char curso;
    struct tp_diciplina diciplina[];
} cad_aluno[2];

int main()
{
    for (int i = 0; i < 2; i++)
    {
        printf("Nome.........: ");
        scanf("%s", &cad_aluno[i].nome);
        printf("RA.........: ");
        scanf("%s", &cad_aluno[i].ra);
        printf("curso.........: ");
        scanf("%s", &cad_aluno[i].curso);
        printf("diciplinas frequentadas******\n");
        for (int j = 0; j < 7; j++)
        {
            printf("\nnome.........: ");
            scanf("%s",&cad_aluno[i].diciplina[j].nome);
            printf("\nDia.........: ");
            scanf("%s",&cad_aluno[i].diciplina[j].diaSeman);
            printf("\nInicia.........: ");
            scanf("%d",&cad_aluno[i].diciplina[j].inicio);
            printf("\nnTermina.........: ");
            scanf("%d",&cad_aluno[i].diciplina[j].termino);
        }
        
    }

    return 0;
}