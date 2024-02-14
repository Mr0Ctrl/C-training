#include <stdio.h>

/*
A program that reads a five-digit integer and decides whether that number is a palindrome
*/

int main(void){
    
    char pal[5];

    scanf("%s", pal);

    for(int i = 0; i < 2; i++){
        if(pal[i] != pal[4-i]){
            printf("0");
            return 0;
        }
    }
    printf("1");
    return 0;
}