#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(void){
    string s = get_string("Before: ");
    printf("After:  ");
    for (int i = 0, l = strlen(s); i < l; i++){
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            // change s[i] to uppercase
            printf("%c", s[i] - ('a' - 'A'));
        }else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
