#include <stdio.h>

int main()
{
	int n, m, sum=0;

	for(scanf("%d", &n); n; --n)
		for(m=n; m >= 0; --m) sum+=(n+m);
	printf("%d", sum);
}
