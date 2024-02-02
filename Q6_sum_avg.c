#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array~ ");
    scanf("%d",&n);
    int arr[n],sum=0;
    float avg=0;
    printf("ENTER %d NUMBERS~ \n",n);
    for(int i=0;i<=n-1;i++){
        printf("Enter number %d~ ",i+1);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("The sum of inputed number is~ %d\n",sum);
    avg=sum/n;
    printf("The average of inputed number is~ %f\n",avg);
}