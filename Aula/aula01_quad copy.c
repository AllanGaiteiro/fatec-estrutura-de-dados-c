#include <stdio.h>

//int total=0;

int quadrado(int a)
{
    return a * a;
}
int ftotal(int a, int b)
{
    return a + b;
}

int main(void)
{
    int total = 0;

    /*
    num=quadrado(2);
    //printf(num); nao pode
    printf("o numero é: %d\n",num);
    num=quadrado(4);
    //printf(num); nao pode
    printf("o numero é: %d\n",num);
    //printf(3);
    */
    ///////////////////////////////////////

    for (int num = 1; num <= 10; num++)
    {
        printf("o numero é: %d\n", quadrado(num));
        //total = ftotal(total, quadrado(num));
        total += quadrado(num);
    }
    printf("o numero total é: %d\n", total);
    return 0;
}