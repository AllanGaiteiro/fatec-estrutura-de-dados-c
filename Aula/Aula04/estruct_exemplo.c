#include <stdio.h>

struct tipo_Pessoa
{
    char nome[40];
    char sobrenome[40];
    ////.... etc ...
} voce;

int main(void)
{
    /// Passando valor
    printf("digite o nome:");
    fgets(voce.nome, 40, stdin);
    printf("digite o sobrenome:");
    fgets(voce.sobrenome, 40, stdin);

    ///imprimindo o valor

    printf("\nSeu nome é %s %s", 
    voce.nome, voce.sobrenome);
}
