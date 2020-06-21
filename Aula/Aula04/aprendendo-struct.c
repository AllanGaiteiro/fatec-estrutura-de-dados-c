#include <stdio.h>

int main(void)
{
    // comun
    /*
    int nota;
    char nome[40];

    float notas[20];     // vetor
    float mnotas[10][2]; // matriz
    */
    /// struct // parece obeto
    struct ficha_aluno // tipo de dados
    {
        char nome[40];///%s
        int nota;////%d
        //float //// %f
    }; //definiçoes de struct

    struct ficha_aluno aluno;

    printf("Nome do aluno.....");
    fgets(aluno.nome, 40, stdin);
    printf("digite a nota\n");
    scanf("%d", &aluno.nota);
    printf("............ lendo a struct .................\n");
    printf("Nome...........: %s \n", aluno.nome);
    printf("Nota...........: %d \n", aluno.nota);
    
    return (0);
}