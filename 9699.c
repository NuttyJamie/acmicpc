#include <stdio.h>

int main()
{
	int n, i, j, buf, max=0;

	scanf("%d", &n);

	for(i=1; i <= n; ++i, max=0)
	{
		for(j=0; j < 5; ++j)
		{
			scanf("%d", &buf);
			max=(!max || buf > max)?	buf:max;
		}
		printf("Case #%d: %d\n", i, max);
	}
}
