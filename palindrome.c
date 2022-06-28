#include<stdio.h>
#include<stdlib.h>

int reverse(int num){
    int rev=0,a;
    while(num>0){
        a=num%10;
        rev=rev*10+a;
        num=num/10;
    }
    return rev;
}


int main(){
    int num,rev;
    printf("Input the number : ");
    scanf("%d",&num);
    rev=reverse(num);
    printf("Reverse number is %d\n",rev);
    if(rev==num){
        printf("The number is palindrome \n");
    }
    else if (rev!=num){
        printf("The number is not palindrome \n");
    }
    else{
        printf("ERROR 404!\n");
    }
    return 0;
}




