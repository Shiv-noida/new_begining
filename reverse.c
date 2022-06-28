#include<stdio.h>
#include<stdlib.h>

int reverse(int n){
    int rev=0,a=0;
    while(n>0){
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    //function to reverse the number
    return rev;
}


int main(){
    int num;//declaring the number
    printf("Input the number : ");
    scanf("%d",&num);//taking input
    printf("The reverse of number is %d\n",reverse(num));
    //reverse number by reverse function..
    return 0;
}
