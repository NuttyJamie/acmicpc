#include <stdio.h>

int main()
{
	int t, n, count=0;

	scanf("%d", &t);

	for(int i=0; i < 5; ++i)
	{
		scanf("%d", &n);

		if(n%10 == t)	++count;
	}

	printf("%d", count);
}
