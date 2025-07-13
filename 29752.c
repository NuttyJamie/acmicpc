#include <stdio.h>

int main()
{
	int n, s, count=0, max=0;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d", &s);

		if(s)	++count;
		else
		{
			max=(max < count)?	count:max;
			count=0;
		}
	}
	max=(max < count)?	count:max;

	printf("%d", max);
}
