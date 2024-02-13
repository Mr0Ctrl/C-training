#include <stdio.h>

/*
A program that sorts three integers received from the user
*/

int main(void)
{   
    int a;
    int b;
    int c;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    int n;

    if (a < c)
    {
        n = a;
        a = c;
        c = n;
    }

    if (a < b)
    {
        n = a;
        a = b;
        b = n;
    }
    
    if (c > b)
    {
        n = c;
        c = b;
        b = n;
    }

    printf("%d %d %d",a,b,c);
    
    return 0;
}
