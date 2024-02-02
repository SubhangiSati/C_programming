#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter numbers a b c~");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("%d is greatest!",a);
        }
        else if(a==c)
            printf("%d and %d are equal but greater than %d!",a,c,b);
        else
            printf("%d is greatest!!",c);
    }
    else if(b>a){
        if(b>c)
            printf("%d is greatest!!!",b);
        else if(b==c)
            printf("%d and %d are equal but greater than %d!",b,c,a);
        else    
            printf("%d is greatest!!!!",c);
    }
    else if(a>c && a==b){
        printf("%d is equal to %d but greater than %d ",a,b,c);
    }
    else if (a==b==c)
        printf("%d %d and %d are equal",a,b,c);
    else
        printf("%d is greatest!!!!!",c);
}