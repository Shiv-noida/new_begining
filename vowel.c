#include<stdio.h>

/*
checking whether input character is vowel or not
author : shiv
place : ghaziabad
*/

int main(){
    char ch;//declaring the character
    printf("Enter the character here ");
    scanf("%c",&ch);//taking input
    printf("You entered : %c\n",ch);
    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U'){
        printf("You entered a vowel \n");
    }//checking the character
    else {
        printf("You Entered an consonant \n");

    }
    return 0;
}
