#include <stdio.h>

int main()
{
	double l;
	int m[11];
	int n, b, s, i, sum=0;

	for(i=0; i < 11; ++i)
		scanf("%d", &m[i]);

	scanf("%d", &n);

	for(i=0; i < n; ++i)
	{
		scanf("%d %lf %d", &b, &l, &s);

		if(l >= 2.0 && s > 16)
			sum+=m[b];
	}

	printf("%d", sum);
}
