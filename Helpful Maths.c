#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",&s);
    int i,j,max, len= strlen(s);
    for(i=0; i<len; i+=2)
    {
        for( j=0; j<len; j+=2) //1+2+3
        {
            if(s[j]>s[j+2])
                max=s[j];
                s[j]=s[j+2];
                s[j+2]=max;

        }
    }
    printf("%c",s);
}
