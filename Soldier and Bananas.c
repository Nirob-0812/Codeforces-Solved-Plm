#include<stdio.h>
int main()
{
    int cost,price,quantity,sum=0,borrow;
    scanf("%d%d%d",&cost,&price,&quantity);
    for(int i=1;i<=quantity;i++)
    {
        sum=sum+cost*i; //3.4,,9+9+12=30
    }
    if(sum>=price)
    {
        borrow=sum-price;
        printf("%d",borrow);
    }
    else
        printf("0\n");
}
