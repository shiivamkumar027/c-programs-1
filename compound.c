#include<stdio.h>
#include<math.h>
int main(){
//CI = P * pow((1 + R / 100), T) 
int r;
int t;
int p;
printf("Enter Principle amount");
scanf("%d",&p);
printf("Enter Time ");
scanf("%d",&t);
printf("Enter Rate");
scanf("%d",&r);
float ci = p * (pow((1 + r / 100),t));
printf("Your final Amount=%f\n", ci);
return 0;
}