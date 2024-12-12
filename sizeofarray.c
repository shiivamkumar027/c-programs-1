#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr [] = { 10,20,3,021};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("%d",len);
    return 0;
}
