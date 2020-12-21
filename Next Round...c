#include<stdio.h>
int main()
{
    int n,k,c=0,i;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d ",&a[i]);
        for(i=0;i<n;i++)
        {
        if(a[i]>0 && a[i]>=a[k-1])
            c++;
        }

    printf("%d\n",c);
    return 0;
}

