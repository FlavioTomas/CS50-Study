#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>


int main(void){
    string s = get_string("Before: ");
    printf("After:  ");
    for (int i = 0, l = strlen(s); i < l; i++){
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}
