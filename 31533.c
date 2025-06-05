#include <stdio.h>

int main()
{
	double t;
	int a, m, n;

	scanf("%d %d %d", &a, &m, &n);

	if(n < m)
	{
		n^=m;
		m^=n;
		n^=m;
	}

	t=(double)m/a;

	printf("%lf", (t*2 < n)?	t*2:n);
}
