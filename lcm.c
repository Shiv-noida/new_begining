#include<stdio.h>

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
    int num1,num2;
    printf("Input first nuber : ");
    scanf("%d",&num1);
    printf("Input second nuber : ");
    scanf("%d",&num2);
    printf("The lcm of two number is %d\n",lcm(num1,num2));
    return 0;
}
