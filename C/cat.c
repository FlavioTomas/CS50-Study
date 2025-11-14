#include "cs50.c"
#include <stdio.h>


void meow(void);

int main(void){
    meow();
}

void meow(void){
    int n;
    do{
        n = get_int("number of meows: ");
    }while (n < 1);
    for (int i = 0; i < n; i++){
        printf("Meow\n");
    }
}
