#include<stdio.h>
int main()
{
    int low=0,up=0,i;
    char s[101];
    scanf("%s",&s);
    int len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            low++;
        }
        if(s[i]>=65 && s[i]<=90)
        {
            up++;
        }
    }
    if(low<up)
    {
        for(i=0;i<len;i++)
        {
            if(s[i]>=97 && s[i]<=122)
            {
                s[i]=s[i]-32;
            }
        }
    }
    else
    {
        for(i=0;i<len;i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                s[i]=s[i]+32;
            }
        }
    }
    printf("%s\n",s);
    return 0;
}
