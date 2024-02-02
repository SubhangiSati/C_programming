#include<stdio.h>
int main(){
    int a,b;
    printf("Enter number a~");
    scanf("%d",&a);
    printf("Enter number b~");
    scanf("%d",&b);
    printf("a is %d before swapping\n",a);
    printf("b is %d before swapping\n",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a is %d after swapping\n",a);
    printf("b is %d after swapping\n",b);

}