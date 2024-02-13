#include <stdio.h>
/*
A program that first receives the number of numbers to be entered from the user 
and cumulatively adds up the product of each entered number and the previous number.
*/
int main(void)
{
    int size; scanf("%d", &size);

    int old; scanf("%d",&old);

    int sum = 0;

    for(int i = 1; i < size; i++){
        int tmp; scanf("%d",&tmp);

        sum += old*tmp;

        old = tmp;
    }

    printf("%d",sum);

    return 0;
}