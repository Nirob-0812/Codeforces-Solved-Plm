#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s%s",&a,&b);
    int len= strlen(a);
    for(int i=0; i<len-1; i++)
    {
        if(a[i]<92)
            a[i]=a[i]+32;
        if(b[i]<92)
            b[i]=b[i]+32;
    }
     if(a<b)
        printf("-1\n");
     else if(a==b)
        printf("0\n");
     else if(a>b)
        printf("1\n");
}
