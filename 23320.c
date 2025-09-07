#include <stdio.h>

int main()
{
	int a[100];
	int n, x, y, i, count=0;

	scanf("%d", &n);

	for(i=0; i < n; ++i)
		scanf("%d", &a[i]);

	scanf("%d %d", &x, &y);

	for(i=0; i < n; ++i)
		if(a[i] >= y) ++count;
	printf("%d %d", n*x/100, count);
}
