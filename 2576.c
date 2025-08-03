#include <stdio.h>

int main()
{
	int n, total=0, min=100;

	for(int i=0; i < 7; ++i)
	{
		scanf("%d", &n);

		if(n & 1)
		{
			total+=n;

			min=(min < n)?	min:n;
		}
	}

	if(!total)	printf("-1");
	else		printf("%d\n%d", total, min);
}
