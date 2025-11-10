#include "cs50.c"
#include <stdio.h>

int main(void){
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf ("%.2f", (float) x/y);
}