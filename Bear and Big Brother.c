#include<stdio.h>
int main()
{
    int a,b,limak,bob,c=0;
    scanf("%d%d",&a,&b);
    limak=a;
    bob=b;
    if(a<b || a==b)
        {
    while(limak<bob || limak==bob)
    {
     limak=limak*3;
     bob=bob*2;
     c++;
    }
        }
        printf("%d\n",c);
     return 0;
}
