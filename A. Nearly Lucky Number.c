#include<stdio.h>
int main()
{
    int i,count=0;
    char n[20];
    scanf("%s",&n);
    int len=strlen(n);
    for(i=0;i<len;i++)
    {
        if(n[i]=='4' || n[i]=='7')
        {
            count++;
        }
    }
    if(count==4 || count==7)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");

    return 0;
}
