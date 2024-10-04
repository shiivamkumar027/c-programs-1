#include<stdio.h>
int main()
{
    int m;
    printf("Enter value of M:");
    scanf("%d",&m);
    if(m>0){
        printf("Value is 1");
    }
    else if(m==0){
        printf("Value is 0");
    }
    else if(m<0){
        printf("Value is -1");
    }
    return 0;
}
