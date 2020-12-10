#include<stdio.h>
int main()
{
    int x,i=4,c=0;
    int a[]={1,2,3,4,5};
    scanf("%d",&x);
    while(x!=0)
    {
        if(x>=a[i])
        {
            x=x-a[i];
            c++;
        }
        else
            i--;
    }
    printf("%d",c);

}
