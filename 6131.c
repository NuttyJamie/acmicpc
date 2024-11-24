#include <stdio.h>

int main()
{
	int a, b, n, t=0;

	scanf("%d", &n);
	for(a=1; a < 501; ++a)
		for(b=1; b <= a; ++b)
			t+=(a*a-b*b == n)?	1:0;
	printf("%d", t);
}
