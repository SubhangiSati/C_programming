#include<stdio.h>
int main(){
    int i,n,f=1;
    printf("Enter value of n~ ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f=f*i;
    }
    printf("The factorial is~ %d",f);
}