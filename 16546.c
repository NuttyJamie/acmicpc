#include <stdio.h>

int main()
{
	int n, buf, sum=0;

	scanf("%d", &n);

	sum=n*(n+1)/2;
	while((n--)-1)
	{
		scanf("%d", &buf);
		sum-=buf;
	}
	printf("%d", sum);
}
