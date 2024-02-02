#include<stdio.h>
int main(){
    int n,c=0;
    printf("The depth of pyramid~ ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(j>=n-(i-1)&&j<=n+(i-1)){
                printf("*"); 
            }
            else{
                printf(" "); 
            } 
        }
        printf("\n");
    }
}

