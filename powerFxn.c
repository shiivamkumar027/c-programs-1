#include<stdio.h>
int main(){
int a,b;
printf("Eter number a and b");
scanf("%d%d",&a,&b);
int c=Power(a,b);
printf(c);
}
int Power(int a,int b)
{
	if(b==0)
	return 1;
	return a*Power(a,b-1);
	}
	
