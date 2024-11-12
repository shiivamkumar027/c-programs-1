#include<stdio.h>
int main(){
	int n,sum;
	printf("Entere a number");
	scanf("%d",&n);
	sum=sum_digit(n);
	printf("sum of digit n=%d",n,sum);
	return 0;
}
int sum_digit(int n){
return 0;
return((n%10)+sum_digit(n/10));
}
