#include <stdio.h>

int main()
{
	int a, b, i, resp;

	for(int i=1; i < 10; ++i)
	{
		printf("? A %d\n", i);

		fflush(stdout);

		scanf("%d", &resp);

		if(resp)
		{
			a=i;
			break;
		}
	}

	for(int i=1; i < 10; ++i)
	{
		printf("? B %d\n", i);

		fflush(stdout);

		scanf("%d", &resp);

		if(resp)
		{
			b=i;
			break;
		}
	}
	
	printf("! %d", a+b);
}
