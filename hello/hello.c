#include <stdio.h>
#include "cs50.c"

int main(void){
    string name = get_string("", "What`s your name? ");

    printf("Hello, %s", name);
}