#include<stdio.h>
#include<math.h>

/*to find roots
author :shivam
place :ghaziabad
*/


int main(){
    int a,b,c;//declaring variables required
    double d=0;
    printf("Enter coefficient of x*x_ ");
    scanf("%d",&a);
    printf("Enter coefficient of x_ ");
    scanf("%d",&b);//taking inputs
    printf("Enter coefficient of constant _ ");
    scanf("%d",&c);
    printf("Quadratic equation : %d x*x + %d x + %d\n",a,b,c);
    d=b*b-4*a*c;
     if(d>=0){
        printf("Roots are : %lf & %lf \n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
    }//applying condition
    else if(d<0){
        printf("Roots does not exists \n");
    }
    else{
        printf("Error 404 !!!\n");
    }
    return 0;
}
