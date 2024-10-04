#include<stdio.h>
#include<math.h>
int main(){
int area;
int R=3;
int l=4;
int b=7;
printf("Enter case=",'c','r','t');
scanf("%d",&area);
switch(area){
    case 'c':("area=%d",R*R);
    break;
    case 'r':("area=%d\n",l*b);
    break;
    case 't':("area is =%d\n",0.5f*l*b);
    break;
    default :("Enter correct Menu");
    break;
}
return 0;
}
