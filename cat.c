#include "cs50.c"
#include <stdio.h>

void meow(int n);

int main(void){
    int n;
    do{
        n = get_int("number of meows: ");
    }while (n < 1);
    meow(n);
}


void meow(int n){
    for (int i = 0; i < n; i++){
        printf("Meow\n");
    }
}
