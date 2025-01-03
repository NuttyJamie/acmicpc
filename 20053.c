#include <stdio.h>

int main()
{
	int t, n, min, max;

	scanf("%d", &t);
	
	while(t--)
	{
		scanf("%d %d", &n, &min);
		max=min;
		while(--n)
		{
			int x;
			scanf("%d", &x);
			min=(x < min)?	x:min;
			max=(max < x)?	x:max;
		}
		printf("%d %d\n", min, max);
	}
}
