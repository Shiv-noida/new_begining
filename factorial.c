#include<stdio.h>


int factorial(int num){
    int fac=1,i=1;
    //function to find out the factorial
    while(i<num+1){
        fac=fac*i;
        i=i+1;
    }
    return fac;
}


int main(){
    int num;//declaring number
    printf("Hello User !\n");
    printf("Input number of which factorial you want : ");
    scanf("%d",&num);//taking the number
    int a=factorial(num);
    printf("Factorial of %d is %d",num,a);
    //displaying the factorial
    return 0;
}
