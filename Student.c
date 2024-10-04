#include<stdio.h>
int main(){
    int roll;
    int p,c,m;
    char string_name[88];
printf("Enter your Name=");
scanf("%s",&string_name);
printf("Enter your Roll No:");
scanf("%d",&roll);
printf("Enter marks=");
scanf("%d%d%d",&p,&c,&m);
int Totalmarks=(p+c+m);
printf("Percentage=%.2f\n",percentage);
printf("Name=%s\n",string_name);
printf("roll=%d\n",roll);
printf("Total Marks=%d\n",Totalmarks);
if(percentage>=60){
    printf("Grade = pass");
}
else if(percentage>=70){
    printf("Division= Grade C");
}else if(percentage>=80){
printf("Division = Grade B");
}else if(percentage>=90){
    printf("Division = Grade A");
}else if(percentage<60){
printf("Division = Fail");
}
float percentage=Totalmarks*.3f;

return 0;
}
