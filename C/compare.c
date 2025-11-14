#include "cs50.c"
#include <stdio.h>

int main(void){
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    if (x < y){
        printf("%i is less than %i", x, y);
    }else if (x > y){
        printf("%i is greater than %i", x, y);
    }else{
        printf("%i = %i", x, y);
    }
}