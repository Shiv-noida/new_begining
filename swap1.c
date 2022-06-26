#include<stdio.h>

int main(){
    int num1,num2;//declaring variable
    printf("Enter first number _ ");
    scanf("%d",&num1);
    printf("Enter second number _ ");
    scanf("%d",&num2);
    printf("First number %d and Second number %d \n",num1,num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("Now ,First number %d and Second number %d \n",num1,num2);
    return 0;
}
