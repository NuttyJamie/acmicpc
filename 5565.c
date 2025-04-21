#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	for(int i=9, t; i; --i)
	{
		scanf("%d", &t);
		n-=t;
	}
	printf("%d", n);
}
