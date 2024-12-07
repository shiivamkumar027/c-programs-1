#include<stdio.h>
#include<string.h>|
struct student{
    int roll;
    char name[100];
    int marks;
}std[100];
int main(){
struct student std[100];
int n;
printf("Enter Student count");
scanf("%d",&n);
for(int i=0;i<n;i++){
    printf("Enter Details\n");
    printf("\nName\n");
    scanf("%s",std[i].name);
    printf("\nRoll\n");
    scanf("%d",&std[i].roll);
    printf("Marks\n");
    scanf("%d",&std[i].marks);
}
//printing
printf("The details are:");
for(int i=0;i<n;++i)
{
printf("Name:%s\n Roll: %d\n Total Marks: %d\n",std[i].name,std[i].roll,std[i].marks);
}
return 0;
}