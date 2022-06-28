#include<stdio.h>


void check_armstrong(int n){
    int a,b=n,sum=0;
    //function to check armstrong nmuber
    while(b>0){
        a=b%10;
        sum=sum+a*a*a;
        b=b/10;
    }
    if(sum==n){
        printf("The number is armstrong \n");
    }
    else if(sum!=n){
        printf("The number is not armstrong \n");
    }
    else{
        printf("Unexpected ERROr 404!\n");
    }
}



int main(){
    int num;
    printf("Input the number : ");
    scanf("%d",&num);//taking number
    check_armstrong(num);
    //checking the conditon
    return 0;
}
