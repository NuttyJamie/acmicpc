#include <stdio.h>

int main()
{
	int d, m, n, sum, min;

	sum=min=-1;

	scanf("%d %d", &m, &n);

	for(d=1; d*d < m; ++d);

	min=d*d;
	while(d*d <= n)
	{
		sum+=d*d;
		++d;
	}
	if(sum != -1)	printf("%d\n%d", sum+1, min);
	else			printf("-1");
}
