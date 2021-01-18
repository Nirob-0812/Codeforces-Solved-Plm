#include<stdio.h>
int main()
{
    int t,c=0;
    scanf("%d",&t);
    while(t--)
    {
        int p,q;
        scanf("%d%d",&p,&q);
        p=p+2;
        if(p<=q)
        {
            c++;
        }
    }
    printf("%d",c);
}
