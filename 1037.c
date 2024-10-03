#include <stdio.h>

int main()
{
	int t, div, min=0, max=0;

	scanf("%d", &t);

	while(t--)
	{
		scanf("%d", &div);
		min=(min > div || min == 0)?	div:min;
		max=(max < div || max == 0)?	div:max;
	}
	printf("%d", min*max);
}

