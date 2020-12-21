#include<stdio.h>
int main()
{
    int x=0;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            scanf("%d",&x);
            if(x==1)
                printf("%d",abs(i-3)+abs(j-3));
        }
    }

}
