#include<stdio.h>
int main(){
    int x,y;
    printf("Enter first number~ ");
    scanf("%d",&x);
    printf("Enter second number~ ");
    scanf("%d",&y);
    if(x>y){
        printf("%d is greatest",x);
    }
    else if(y>x){
        printf("%d is greatest",y);
    }
    else{
        printf("%d and %d are equal!", x,y);
    }
}