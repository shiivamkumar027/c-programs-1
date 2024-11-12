#include<stdio.h>
int main(){
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	int c=fact(a);
	printf(c);
}
int fact(int a)
{
	if(a==0)
	{
	return 1;
	}
else if(a==1)
{
	return 1;
}
else{

return a*fact(a-1);
}
}
