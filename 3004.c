#include <stdio.h>

int main()
{
	int i, n, t=2;

	scanf("%d", &n);

	for(i=1; i < n; ++i) t+=((i+1)/2)+1;
	printf("%d", t);
}
