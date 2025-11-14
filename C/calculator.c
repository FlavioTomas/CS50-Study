#include "cs50.c"
#include <stdio.h>

void soma(void);
void mult(void);


int main(void){
    soma();
    mult();
}







void soma(void){
    printf("\tDigite os numeros que quer somar, digite um numero <= 0 se ja digitou todos os numeros que deseja somar!\n");
    float n = 1, soma;
    do{
        printf("Que numero deseja adicionar a soma? ");
        scanf("%f", &n);
        soma += n;
    }while (n > 0);
    printf("Soma dos numeros: %f", soma);
}

void mult(void){
    printf("\tDigite os numeros que quer multiplicar, digite 0 se ja digitou todos os numeros que deseja multiplicar!\n");
    float n = 1, mult = 1;
    do{
        printf("Que numero deseja adicionar a multiplicaçao? ");
        scanf("%f", &n);
        mult *= n;
    }while (n > 0);
    printf("Multiplicaçao dos numeros: %f", mult);
}
