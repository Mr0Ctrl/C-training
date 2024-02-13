#include <stdio.h>

/*
A program that calculates the next date/day received from the user in "year month day" format and prints it on the screen
*/


int main (void)
{
    int day, month, year;

    scanf("%d %d %d",&day,&month,&year);

    int month_l = 30;
    int reminder = 0;

    if((month <= 7)&&( month%2)) {
        month_l = 31;
    }
    if((month > 7)&&!(month%2)) {
        month_l = 31;
    }

    if(0==(year%4)){
        reminder = 1;
    }

    if (month == 2){
        month_l = reminder + 28;
    }




    if (day+1 > month_l){
        if(month+1 > 12){
            year ++;
            month = 1;
        }else{
            month ++;
        } 
        day = 1;

    }else{
        day ++;
    }



    printf("%d %d %d",day,month,year);

}