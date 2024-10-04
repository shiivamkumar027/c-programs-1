#include<stdio.h>
#include<math.h>
int main(){
    int costprice;
    int sellprice;
    printf("Enter cost :");
    scanf("%d",&costprice);
    printf("Enter selling price=");
    scanf("%d",&sellprice);
    if(costprice<sellprice){
        int profit =sellprice-costprice;
        printf("profit=%d",profit);
     }
    else if(costprice==sellprice){
        printf("No income");
    }
    else if(costprice>sellprice){
        int loss=costprice-sellprice;
        printf("loss =%d\n",loss);
    }
return 0;
}
