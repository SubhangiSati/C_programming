#include<stdio.h>
int main(){
    int a;
    printf("Enter number you want to check if it's even or odd~ ");
    scanf("%d",&a);
    if(a%2==0)
        printf("%d is an even number :D",a);
    else
        printf("%d is an odd number :(",a);
}