#include <stdio.h>

int main()
{
	int t, n, a;

	scanf("%d", &t);

	while(t--)
	{
		int min=0, walk=0;

		scanf("%d", &n);

		while(n--)
		{
			scanf("%d", &a);

			walk+=(a-min)/120;
			min=a;
		}

		walk+=(1440-min)/120;
		puts((walk > 1)?	"YES":"NO");
	}
}
