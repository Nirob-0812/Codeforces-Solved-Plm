#include<stdio.h>
int main()
{
    long long int m,n,a,p,q;
    scanf("%lld%lld%lld",&m,&n,&a);
    if(m%a==0)
        p=m/a;
    else
        p=m/a+1;
    if(n%a==0)
        q=n/a;
    else
        q=n/a+1;
    printf("%d\n",p*q);
    return 0;
}
