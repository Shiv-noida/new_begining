#include<stdio.h>
#include<stdlib.h>

/*to check number is prime or not
author : shiv
place : ghaziabad
*/

void prime(int n){
    int p=1;
    //function to check number is prime or not
    for(int i=2;i<n;i++){
        if(n%i==0){
            p=0;
        }
    }
    if(p==0){
        printf("The number %d is not prime \n",n);
    }
    else if(p==1){
        printf("The number %d is prime \n",n);
    }
    else{
        printf("ERROR 404!!\n");
    }

}


int main(){
    int num;//declaring number
    printf("Input the number: ");
    scanf("%d",&num);//taking input

    prime(num);//checking via function
    return 0;
}
