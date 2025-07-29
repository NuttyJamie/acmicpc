#include <stdio.h>

int main()
{
	int n, t, total=0;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d", &t);

		total+=t-1;
	}

	printf("%d", total+1);
}
