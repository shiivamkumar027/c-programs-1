#include<stdio.h>
struct student{
    int rollno;
    char myString[100];
    float marks;
};
int main(){
    struct student std={13,"shivam",45.6f};
    printf("%d\n" "%s\n" "%.2f\n",std.rollno,std.myString,std.marks);
    return 0;
}