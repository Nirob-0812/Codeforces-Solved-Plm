#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%s",&s);
    int len = strlen(s);
    for(int i=0;i<len;i++)
    {
        if(i==0 && s[i]>=97 && s[i]<=122)
            s[i]=s[i]-32;

    }
    printf("%s\n",s);
    return 0;
}
