#include<stdio.h>
int main()
{
    int m,n,sum;
    scanf("%d%d",&m,&n);
    if(1<=m && m<=n && n<=16)
    sum=(m*n)/2;
    printf("%d",sum);

    return 0;
}
