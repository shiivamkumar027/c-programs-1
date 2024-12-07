#include<stdio.h>
#include<math.h>
int main()
{
    int amount;
    float Interstamount;
    float finalamount;
    int t;
    printf("Enter Your amount=");
    scanf("%d",&amount);
    printf("Enter time ");
    scanf("%d",&t);
 //Interst is Default set as 5%
    Interstamount=amount*5*t/100;
    finalamount=amount+Interstamount;
    printf("The amount After=%.2f",finalamount);
    return 0;
}