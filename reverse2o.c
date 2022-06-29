#include<stdio.h>



int main(){
    int marks[10];
    int rev[10];//declaring variable and array
    int l;
    for(int i=0;i<10;i++){
            //getting array from user
        printf("Enter the element of array _ ");
        scanf("%d",&marks[i]);
    }
    printf("Array is :\n");
    for(int j=0;j<10;j++){
        //displaying the array
        printf(" %d ,",marks[j]);
    }
    printf("\n");
    for(int a=0;a<10;a++){
        //naking a rev array reverse of marks
        rev[a]=marks[9-a];
    }
    for(int c=0;c<10;c++){
        //equating both array
        marks[c]=rev[c];
    }
    printf("Now, marks array is \n");
    for(int j=0;j<10;j++){
        //displaying reverse marks array
        printf(" %d ,",marks[j]);
    }
    return 0;
}
