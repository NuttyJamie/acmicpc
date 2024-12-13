#include <stdio.h>

int main()
{
	int n, x, a0=0, a1=0, min=0;

	scanf("%d %d", &n, &x);
	scanf("%d", &a0);
	while(--n)
	{
		scanf("%d", &a1);
		min=(!min || a0+a1 < min)? a0+a1:min;
		a0=a1;
	}
	printf("%ld", min*x);
}
