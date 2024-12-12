
#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for (int i=1;i<=n;i++){
        if (arr[i]>max){
           max=arr[i];
        }
    }
        printf("The largest is :");
        printf("%d", max);
}
