#include <stdio.h>

int main()
{
	int t, n, sum, min;

	scanf("%d", &t);

	while(t--)
	{
		sum=0;
		min=101;

		for(int i=0; i < 7; ++i)
		{
			scanf("%d", &n);

			if(!(n & 1))
			{
				sum+=n;
				min=(n < min)? n:min;
			}
		}
		printf("%d %d\n", sum, min);
	}
}
