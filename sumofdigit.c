#include<stdio.h>
#include<stdlib.h>

/*to find sum of digit of  any number
author : shiv
place : ghiaziabad
*/

int main(){
    int num,a,c,sum=0;//declaring number ,sum for sum of digit
    printf("Input the number : ");
    scanf("%d",&num);//taking input
    a=num;
    while(a>0){
        c=a%10;
        sum=sum+c;//applying logic
        a=a/10;
    }
    printf("Sum of digit of  %d is %d\n",num,sum);
    return 0;
}
