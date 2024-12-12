#include<stdio.h>
int binarySearch(int arr [] , int target , int start , int end , int len)
{
    if (start > end)
    {
        return -1;
    }
    int mid = (start + end)/2;
    if (arr[mid] == target)
    {
        return mid;
    }
    else if ( arr[mid] < target)
    {
        binarySearch(arr,target , mid+1 ,end ,len);
    }
    else
    {
        binarySearch(arr , target , start , mid-1 , len);
    }
}
void bubbleSort(int arr [] , int len)
{
    int i , j ;
    for ( i = 0; i < len ; i++)
    {
        for ( j = 0; j < 5 - i - 1; j++)
        {
           if (arr[j]>arr[j+1])
           {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] =temp;
           }
           
        }
    }
    //printing
    for ( i = 0; i < 5; i++)
    {
       printf("%d ",arr[i]);
    }
}
int main(int argc, char const *argv[])
{
    int arr[] ={100,2,40,-1,50};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("After Sorting:\n");
    bubbleSort(arr,len);
    int target = 40 , start = 0 ,end = 5 ;
    int myans = binarySearch(arr , target , start , end , len);
    if (myans!=-1)
    {
        printf("\nTarget Element %d found at index %d",target ,myans);
    }
    else
    {
        printf("\nElement not found.");
    }
    return 0;
}
