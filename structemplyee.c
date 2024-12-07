#include<stdio.h>
#include<string.h>
struct employee{
    char name[200];
    int id;
    char role[300];
    int salary;
}emp1;
int main(){
    struct employee emp1;
    printf("Enter your name :");
    scanf("%s",emp1.name);
    printf("Enter your id:");
    scanf("%d",&emp1.id);
    printf("Enter your role");
    scanf("%s",emp1.role);
    printf("Enter your salary");
    scanf("%d",&emp1.salary);

    //printing
    printf("Employee Name:%s\n",emp1.name);
    printf("Your id :%d\n",emp1.id);
    printf("Role:%s\n",emp1.role);
    printf("Your salary:%d\n",emp1.salary);
   return 0;
}