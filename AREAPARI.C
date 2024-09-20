#include<stdio.h>
#include<conio.h>
int main(){
clrscr();
int a=10;
int b=5;
int c=20;
// for Square
printf("The area of a square is:=%d\n",a*a);
printf("the perimetre of a square is:=%d\n",4*a);
//For rectangle
printf("The area of a Rect is=%d\n",a*b);
printf("The perimetre of a Rect is=%d\n",(a+b)*2);
//For a circle
printf("The area of a circle is=%f\n",3.14*(a*a));
printf("THe parimetre of circle is=%f\n",2*3.14*a);
//for a triangle
printf("The area of a Triangle=%f\n",.5*a*b);
printf("THe parimetre of a Triangle is=%d\n",a+b+c);
getch();
}