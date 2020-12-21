#include<stdio.h>
int main()
{
    int n,i,a=0,d=0;
    scanf("%d",&n);
    char str[n];
    for(i=0;i<n;i++)
    {
        scanf("%s",&str[i]);
        if(str[i]=='A')
        {
            a++;
        }
        else if(str[i]=='D')
        {
            d++;
        }
    }
    if(a>d)
    {
        printf("Anton\n");
    }
    else if(a<d)
    {
        printf("Danik\n");
    }
    else if(a==d)
    printf("Friendship\n");


}
