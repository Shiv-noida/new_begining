#include<stdio.h>
#include<stdlib.h>
/*to check year is leap or not
author : shivam tiwari
place : ghaziabad
*/


int main(){
    int year;//declaring year variable
    printf("Input the year which you want to check ? ");
    scanf("%d",&year);
    //taking input
    if(year%400==0){
        printf("The year %d is a leap year \n",year);
    }//checkin whether year is leap or not
    else if (year%100==0){
        printf("The year %d is not a leap year \n",year);
    }
    else if(year%4==0){
        printf("The year %d is a leap year \n",year);
    }
    else if(year%4!=0){
        printf("The year %d is a normal year \n",year);
    }
    else{
        printf("UNExpected ERROR !\n");
    }

    return 0;
}





