#include<stdio.h>
#include<math.h>

int maxterm(int a,int b){
    int ma=0;
    if(a>b){
        ma=a;
    }
    else{
        ma=b;
    }
    return ma;
}


int maxe(int arr[],int l){
    int m=arr[0];
    for(int i=1;i<l;i++){
        m=maxterm(m,arr[i]);
    }
    return m;
}



int main(){
    int arr[15]={45,1,4,8,2,71,58,159,7,2,3,45,26,98,48};
    printf("The array is : \n");
    for(int i=0;i<15;i++){
        printf(" %d ,",arr[i]);
    }
    printf("\n");
    int l=sizeof(arr)/4;
    printf("The maximum element of array is %d",maxe(arr,l));
    return 0;
}
