#include <stdio.h>

int main()
{
	int out, in, cur=0, max=0;

	for(int t=10; t; --t)
	{
		scanf("%d %d", &out, &in);

		cur-=out;
		cur+=in;

		max=(max < cur)?	cur:max;
	}

	printf("%d", max);
}
