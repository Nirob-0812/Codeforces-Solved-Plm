#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        char str[100];
        scanf("%s",&str);
        int len=strlen(str);
        if(len<=10)
            printf("%s\n",str);
        else
        printf("%c%d%c\n",str[0],len-2,str[len-1]);

    }


return 0;
}



