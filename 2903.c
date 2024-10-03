#include <stdio.h>

int dot(int i)
{
	if(i == 1) return 3;

	return 2*dot(i-1)-1;
}

int main()
{
	int n;

	scanf("%d", &n);
	printf("%d", dot(n)*dot(n));
}

