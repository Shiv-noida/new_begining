#include<stdio.h>


/*it is displa yo ffibonacci series
author : shiv
place : ghaziabad
*/


int main(){
    int a=1,b=1,c;
    int i=0;    //declaring three integers
    int n;//index of element s declaration
    printf("The fibonacci series is here : \n");
    printf(" %d , %d , ",a,b);
    while(i<16){
        c=a+b;
        printf(" %d ,",c);
        a=b;
        b=c;
        i=i+1;
    }//showin the fibonacci series
    printf(" ...\n");
    printf("Enter the index of element which you want _ ");
    scanf("%d",&n);
    a=1,b=1;
    for(int i=0;i<n-2;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("your number : %d",c);
    return 0;
}
