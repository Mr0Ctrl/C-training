#include <stdio.h>

/*
a program that returns the two largest numbers in an array
*/

int main(void){

    int runners[10];
    int first = 0,fn, second = 0,sn;

    for (int i = 0 ; i < 10; ++i) {
        scanf("%d", &runners[i]);
    }

    int n = 0;
    do{

        if(second < runners[n]){
            if(first < runners[n]){
                second = first;
                sn = fn;
                first = runners[n];
                fn = n;
            }else{
                second = runners[n];
                sn = n;
            }
        }

        n++;
    }while(n < 10);

    printf("%d ", fn+1);
    printf("%d\n", sn+1);
    

    return 0;


}