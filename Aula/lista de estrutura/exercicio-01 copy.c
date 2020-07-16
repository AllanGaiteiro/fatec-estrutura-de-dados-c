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
    char diaSeman;
    int inicio;
    int termino;
} diciplina[7];

struct tp_cad_alunos
{
    char nome;
    char ra;
    char curso;
    struct tp_diciplina diciplina[7];
};

void main(void)
{
    struct tp_cad_alunos cad_aluno[2];
    printf("digite uma string: ");
    fflush(stdin);
    fgets(cad_aluno[0].nome, 40, stdin);
    printf("%s", cad_aluno[0].nome); ///printei endereço
    ////// erro 

    printf("digite uma string: ");
    //////// chamei o endereço
    scanf("%s", &cad_aluno[0].nome);

    //printf("%s", cad_aluno[0].nome); //// printei  normal
    //// resulatado erro ///////////

    printf("%s", cad_aluno[0].nome); ///printei endereço
    ///// erro

     ///printf("%s", cad_aluno[0].nome); ///printei endereço
    ///// erro

    return 0;
}

