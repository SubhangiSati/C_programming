#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the end limit of odd natural numbers~ ");
    scanf("%d",&n);
    printf("The %d odd natural numbers are~ \n",n);
    for(int i=1;i<=2*n;i++){
        if(i%2!=0){
            printf("%d ",i);
            sum=sum+i;
        }
    }
    printf("\nThe of odd numbers is~ %d",sum);
}