#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the number you want multiplier upto~ ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1; j<=10;j++){
            m=i*j;
            printf("%d X %d =%d\n",i,j,m);
        }
    }

} 