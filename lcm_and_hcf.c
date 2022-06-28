#include<stdio.h>

int hcf(int a,int b){
    int hcf;
    //gunction to find hcf
    if(a>b){
        hcf=b;
    }
    else{
        hcf=a;
    }
    while(hcf>0){
        if(a%hcf==0 && b%hcf==0){
            break;
        }
        hcf=hcf-1;
    }
    return hcf;
}


int lcm(int num1,int num2){
    int lcm=0;
    //function to find lcm of two number
    if(num1>num2){
        lcm=num1;
    }
    else{
        lcm=num2;
    }
    while(lcm<9999999999999999999999){
        lcm=lcm+1;
        if(lcm%num1==0 && lcm%num2==0){
            break;
        }
    }
    return lcm;
}


int main(){
    int num1,num2;//declaring numbers
    printf("input first number : ");
    scanf("%d",&num1);//taking inputs
    printf("input second number : ");
    scanf("%d",&num2);
    printf("The hcf of two number is %d\n",hcf(num1,num2));
    printf("The lcm of two number is %d\n",lcm(num1,num2));
    //printing lcm and hcf of number
    return 0;
}
