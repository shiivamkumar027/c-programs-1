#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter value of a");
    scanf("%d",&a);
    printf("Enter value of b");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("value of a%d\n",a);
    printf("values of b=%d",b);
    return 0;
}