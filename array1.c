#include<stdio.h>

int main(){
    int arr[7]={5,4,6,8,9,7,2};
    int sum=0;
    int product=1;
    for(int i=0;i<7;i++){
        sum=sum+arr[i];
    }
    for(int j=0;j<7;j++){
        product=product*arr[j];
    }
    printf("The sum of element of array is %d\n",sum);
    printf("The product of element of array is %d\n",product);
    return 0;
}
