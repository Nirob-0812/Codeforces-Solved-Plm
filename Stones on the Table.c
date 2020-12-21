#include<stdio.h>
#include<string.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    char s[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s",&s[i]);
    }
    int r=0,g=0,b=0;
    for(int i=1;i<=n;i++)
    {
         if(s[i-1]==s[i])
            if(s[i]=='R')
            r++;
         else if(s[i]=='G')
            g++;
         else if(s[i]=='B')
            b++;

    }
    printf("%d\n",r+g+b);
    return 0;
}
