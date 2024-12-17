#include <stdio.h>

int main()
{
	int n, p=0, next=0, low=0, max=0;

	scanf("%d", &n);
	while(n--)
	{
		scanf("%d", &next);
		if(!low)	low=p=next;
		if(p >= next)
		{
			max=(p-low > max)?	p-low:max;
			low=p=next;
		}
		if(!n && p < next)
			max=(next-low > max)? next-low:max;
		p=next;
	}
	printf("%d", max);
}
