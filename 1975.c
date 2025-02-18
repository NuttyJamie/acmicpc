#include <stdio.h>

int main()
{
	int t, n, count=0;

	scanf("%d", &t);

	while(t--)
	{
		scanf("%d", &n);
		for(int d=2; d <= n; ++d)
		{
			int tmp=n;
			while(!(tmp%d))
			{
				++count;
				tmp/=d;
			}
		}
		printf("%d\n", count);
		count=0;
	}
}
