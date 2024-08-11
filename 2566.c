#include <stdio.h>

int main()
{
	int i, j, x=0, y=0, buf, max=0;

	for(i=0; i < 9; ++i)
	{
		for(j=0; j < 9; ++j)
		{
			scanf("%d", &buf);
			if(buf > max)	
			{
				max=buf;
				x=i;
				y=j;
			}
		}
	}

	printf("%d\n", max);
	printf("%d %d", ++x, ++y);
}
