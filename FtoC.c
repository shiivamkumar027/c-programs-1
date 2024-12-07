#include<stdio.h>
int main(){
    int f,c,temp,temp1;
    printf("Enter Farenheit");
    scanf("%d",&f);
   temp=(f-32)*5/9;
     printf("Celsius is=%d\n", temp);   
    printf("Enter Celsius");
    scanf("%d",&c);
temp1=(c*9/5)+32;
printf("Farenheit is=%d\n", temp1);
return 0;

}