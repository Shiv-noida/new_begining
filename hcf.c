#include<stdio.h>

int hcf(int a,int b){
    int hcf;
    if(a>b){
        hcf=b;
    }
    else{
        hcf=a;
    }
    while(hcf>0){
        hcf=hcf-1;
        if(a%hcf==0 && b%hcf==0){
            break;
        }
    }
    return hcf;
}


int main(){
    int num1,num2;
    printf("input first number : ");
    scanf("%d",&num1);
    printf("input second number : ");
    scanf("%d",&num2);
    printf("The hcf of two number is %d\n",hcf(num1,num2));
    return 0;
}
