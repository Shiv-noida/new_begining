#include<stdio.h>
#include<stdlib.h>

void prime(int n){
    int de=1;
    //function to give number if prime
    for(int i=2;i<n;i++){
        if(n%i==0){
            de=0;
            break;
        }
    }
    if(de==0){
        //nothing to be done
    }
    else if(de==1){
        printf(" %d ,",n);
    }
    else{
        printf("ERROR 404 !!");
    }
}


int main(){
    printf("The prime number are given as :\n");
    for(int i=2;i<101;i++){
        prime(i);

    }
    return 0;
}
