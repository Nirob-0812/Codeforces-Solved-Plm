#include<stdio.h>
int main()
{
    int i,j,c=0;
    char Berland[102],Birland[102];
    scanf("%s%s",&Birland,&Berland);
    int len1=strlen(Birland);
    int len2=strlen(Berland);
    for(i=0,j=len2-1;i<len1,j>=0;i++,j--)
    {
        if(Birland[i]==Berland[j])
        {
            c++;
        }
    }
    if(c==len1)
        printf("YES\n");
    else
        printf("NO\n");

        return 0;
}
