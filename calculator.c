#include "cs50.c"
#include <stdio.h>

int main(void){
    int dollars = 1;
    while(true){
        char c = get_char("Here's $%i. Double it and give it to the next person? ", dollars);
        if (c == 'y' || c == 'Y'){
            dollars *= 2;
        }else{
            break;
        }
    }
    printf("Here's $%i", dollars);
}