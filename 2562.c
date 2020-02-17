#include <stdio.h>

int main()
{
	int N, max=1, count=1, i=1;

	for(i=1; i<=9; ++i)
	{
		scanf("%d", &N);
		if(N>max)	
		{
			max=N;
			count=i;
		}
	}
	printf("%d\n%d", max, count);
}

