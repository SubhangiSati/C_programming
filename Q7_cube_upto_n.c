#include<stdio.h>
int main(){
    int n, c;
    printf("Enter the number you want cubes upto~ ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        c=i*i*i;
        printf("Cube of %d is~ %d\n",i,c);
    }
}