#include<stdio.h>
#include<math.h>
int main(){
    int n,x,s=0;
    printf("THE LIMIT OF SERIES: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i<n){
            x=pow(10,i)-1;
            printf("%d+",x);
            s+=x;
        }
        else if(i==n){
            x=pow(10,i)-1;
            printf("%d",x);
            s+=x;
        }
    }
    printf("\nThe sum is~ %d",s);
}