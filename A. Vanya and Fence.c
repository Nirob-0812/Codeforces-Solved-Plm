#include<stdio.h>
int main()
{
    int n,h,i,f,c=0,c1=0,sum;
    scanf("%d%d",&n,&h);
    for(i=0;i<n;i++)
    {
        scanf("%d",&f);
        if(f<=h)
        {
            c++;
        }
        else if(f>h)
        {
            c1++;
        }
    }
    sum=c*1+c1*2;
    printf("%d",sum);

}
