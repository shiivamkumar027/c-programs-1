#include<stdio.h>
int main()
{
	int a=20;
	int b=30;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("value of a=%d\n",a);
	printf("value of b=%d\n",b);
	return 0;
}
