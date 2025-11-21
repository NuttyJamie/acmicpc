#include <stdio.h>

int main()
{
	int out, in, cur=0, max=0;

	for(int i=0; i < 4; ++i)
	{
		scanf("%d %d", &out, &in);

		cur-=out;
		cur+=in;

		if(max < cur)	max=cur;
	}

	printf("%d", max);
}
