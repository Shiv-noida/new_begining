#include<stdio.h>

int main(){
    int num1,num2;//declaration of number
    char ch;
    printf("Choose the operator (+-*/%) : ");
    scanf("%c",&ch);
    printf("Input first number _ ");
    scanf("%d",&num1);//taking input from user
    printf("Input second number _ ");
    scanf("%d",&num2);

    switch(ch){
    case '+':
        printf("%d + %d = %d",num1,num2,num1+num2);
        break;
    case '-':
        printf("%d - %d = %d",num1,num2,num1-num2);
        break;
    case 'x':
        printf("%d x %d = %d",num1,num2,num1*num2);
        break;
    case '/':
        printf("%d / %d = %d",num1,num2,num1/num2);
        break;
    case '%':
        printf("%d % %d  = %d",num1,num2,num1%num2);
        break;
    default :
        printf("Unexpected error !!\n");
    }


    return 0;
}
