#include<stdio.h>
#include<string.h>
int main()
{
    int n,x=0;
    scanf("%d",&n);
    while(n--)
    {
        char s[n];
        scanf("%s",&s);
        if(s[1]=='+')
            x++;
        if(s[1]=='-')
            x--;

    }

    printf("%d",x);
}
