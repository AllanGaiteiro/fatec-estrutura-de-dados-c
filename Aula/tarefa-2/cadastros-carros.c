#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
2)  Desenvolva uma aplicação para cadastrar carro. 
Insira na estrutura informações pertinentes ao carro.
- Cor
- Modelo
- Placa
- Ano
*/

struct tp_cad_carros
{
    char cor[40];
    char modelo[40];
    char placa[40];
    int ano;
}cad_carros[2];

int main()
{
    printf("............Carlinhos Veiculos..............\n");

    printf("..............cadastrar carros..............\n ");
    for (int i = 0; i < 2; i++)
    {
        printf("ano...........: ");
        scanf("%d", &cad_carros[i].ano);

        printf("modelo........: ");
        scanf("%s", &cad_carros[i].modelo);

        printf("cor...........: ");
        scanf("%s", &cad_carros[i].cor);

        printf("placa.........: ");
        scanf("%s", &cad_carros[i].placa);

        printf("carro cadastrado com sucesso.\n");
    }

    printf(".............carros cadastrados..............\n ");
    for (int i = 0; i < 2; i++)
    {
        printf("..............cadastrar carros[%d]..............\n ",i);
        
        printf("ano...........: %d\n", cad_carros[i].ano);

        printf("modelo........: %s\n", cad_carros[i].modelo);

        printf("cor...........: %s\n", cad_carros[i].cor);

        printf("placa.........: %s\n", cad_carros[i].placa);
    }
    

    return 0;
}