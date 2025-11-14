#include <stdio.h>

void print_block(void);

int main(void){
    print_block();
}

void print_block(void){
    int r, c;
    do{
        printf("What's the number of rows of the block?\n");
        scanf("%i", &r);
        printf("What's the number of columns of the block?\n");
        scanf("%i", &c);
    }while(r < 1 && c < 1);


    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("#");
        }
        printf("\n");
    }   
}