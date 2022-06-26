#include<stdio.h>

/*here swapping of two number
author : Shiv
place : ghaziabad
*/

int main(){
    int num1,num2,s;//declaring variables
    printf("Input first number : ");
    scanf("%d",&num1);//taking inputs
    printf("Input second number : ");
    scanf("%d",&num2);
    //swapping via third number ..
    printf("\nThe first number : %d and second number : %d \n",num1,num2);
    s=num1;
    num1=num2;
    num2=s;
    printf("Now, first number : %d and second number : %d \n ",num1,num2);
    return 0;
}
