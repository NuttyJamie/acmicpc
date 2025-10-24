#include <stdio.h>

int main()
{
	double area=0;
	int h[10000];
	int n, i, w;

	scanf("%d", &n);

	++n;
	for(i=0; i < n; ++i)
		scanf("%d", &h[i]);

	--n;
	for(i=0; i < n; ++i)
	{
		scanf("%d", &w);

		area+=(double)(h[i]+h[i+1])*w/2;
	}

	printf("%lf", area);
}
