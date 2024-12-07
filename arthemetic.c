#include<stdio.h>
#include<math.h>
int main()
{
    int var1='+';
    int var2='-';
    int var3='*';
    int var4='/';
    int var5='%';
    int c;
    int a=3;
    int b=5;
    printf("Enter operator");
    scanf("%d",&c);
if(c==var1)
{
    printf(a+b);
}
else if(c==var2)
{
    printf(a-b);
}
else if(c==var3)
{
    printf(a*b);
}
else if(c==var4)
{
    printf(a/b);
}
else if(c==var5)
{
    printf(a%b);
}
return 0;
}
