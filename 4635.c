#include <stdio.h>

int main()
{
	int n, s, t0, t1, mile;

	while(1)
	{
		scanf("%d", &n);

		if(n == -1) break;

		scanf("%d %d", &s, &t0);
		mile=s*t0;

		while(--n)
		{
			scanf("%d %d", &s, &t1);
			mile+=s*(t1-t0);
			t0=t1;
		}
		printf("%d miles\n", mile);
	}
}
