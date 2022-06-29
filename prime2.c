#include<stdio.h>


void prime(int n){
    int de=1;
    //function to return prime number
    for(int j=2;j<n;j++){
        if(n%j==0){
            de=0;
            break;
        }
    }
    if(de==1){
        printf( "%d ,",n);
    }
}

void prime_factors(int num){
    for(int i=1;i<num+1;i++){
        if(num%i==0){
            prime(i);
        }
    }
    //function to find prime factor
}



int main(){
    int num;//declaring variables
    printf("Input the number : ");
    scanf("%d",&num);//taking inputs
    printf("The prime factor of number is :\n");
    prime_factors(num);//caalling function to display prime factors
    return 0;
}
