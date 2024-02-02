#include<stdio.h>
int main(){
    int n;
    float sum=0.0;
    printf("ENTER THE LIMIT~ ");
    scanf("%d",&n);
    printf("The series is~ ");
    for(int i=1;i<=n;i++){
        if(i<n){
            printf("1/%d+",i);
            sum=sum+(1/(float)i);
        }
        else if(i==n){
            printf("1/%d",i);
            sum=sum+(1/(float)i);
        }     
    }
    printf("\nThe sum is~ %f",sum);
}