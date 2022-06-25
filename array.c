#include<stdio.h>

int main(){
    int n,j=0;
    printf("How many element you want in array? ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter the %d th element of array :",i+1);
        scanf("%d",&arr[i]);
    }
    while(j<n){
        printf("The %d th Element is %d\n",j+1,arr[j]);
        j++;
    }
    return 0;
}
