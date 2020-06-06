#include <stdio.h>

void soma10(int x){
    x = x + 10;
    printf("(sem ponteiro) agora o numero vale dentro: %d \n", x);

    return ;
}

void soma10p(int *x){
    *x = *x + 10;
    printf("(ponteiro) agora o numero vale dentro: %d \n", *x);
    return ;
}
int main(void)
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("o numero digitado foi : %d \n", numero);
    // chamar soma

    soma10(numero);
    printf("(sem ponteiro)agora o numero vale: %d \n", numero);

    soma10p(&numero);
    printf("(ponteiro) agora o numero vale: %d \n", numero);
    return 0;
}