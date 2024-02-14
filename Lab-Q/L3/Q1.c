#include <stdio.h>
#include <math.h>

/*
A C program to calculate the real roots of a quadratic equation
*/

int main(void){
    double r1 , r2 ;

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int delta = (b*b) - (4*a*c);

    if(delta < 0){
        printf("kok yok");
    }
    if(delta == 0){
        r1 = -b/(2*a);
        r2 = r1;

        printf("%.3f\n%.3f",r1,r2 );

    }
    if(delta > 0){
        double sqrD;
        sqrD = sqrt(delta);

        r1 = (sqrD - b)/(2*a);
        r2 = (-sqrD - b)/(2*a);

        
        printf("%.3f\n%.3f",r1,r2 );

    }



}