#include <stdio.h>
int main()
{
	int t,x,y,z,c=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&x,&y,&z);
		if(x+y+z>=2)
		{
			c++;
        }
    }
			printf("%d\n",c);
			return 0;
			}
