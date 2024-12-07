#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("A is Greator");
    }
    else if(b>a && b>c)
    {
        printf("B is greator");
    }
    else if(c>b && c>a)
    {
        printf("C is greator");
    }
    else if(a==b&& b==c && c==a)
    {
        printf("Equal values");
    }
return 0;

}
