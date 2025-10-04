#include <stdio.h>

int main()
{
	int f[100];
	int t, n, l, h;

	scanf("%d", &t);

	for(int i=1; i <= t; ++i)
	{
		int j;

		scanf("%d %d %d", &n, &l, &h);

		for(j=0; j < n; ++j)
			scanf("%d", &f[j]);

		j=0;
		while(l <= h)
		{
			if(j == n)					break;
			else if(f[j]%l && l%f[j])	++l, j=0;
			else						++j;
		}
		
		printf("Case #%d: ", i);
		if(j == n)	printf("%d\n", l);
		else		puts("NO");
	}
}
