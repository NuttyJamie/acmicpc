#include <stdio.h>

int main()
{
	int n, p, min=100001, max=0;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d", &p);

		min=(p < min)?	p:min;
		max=(max < p)?	p:max;
	}

	p=min-(max>>1);
	printf("%d", ((p < 0)?	0:p));
}
