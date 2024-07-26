#include <stdio.h>

int main()
{
	int n, buf, min=1000001, max=-1000001;

	scanf("%d", &n);
	
	if(n == 1)
	{
		scanf("%d", &buf);
		min=max=buf;
	}
	else
	{
		while(n > 0)
		{
			scanf("%d", &buf);
			if(max < buf)	max=buf;
			if(min > buf)	min=buf;
			n--;
		}
	}

	printf("%d %d", min, max);
}
