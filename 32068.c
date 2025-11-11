#include <stdio.h>

int main()
{
	int t, l, r, s, step;

	scanf("%d", &t);

	while(t--)
	{
		step=0;

		scanf("%d %d %d", &l, &r, &s);

		l-=s;
		l*=-1;
		r-=s;

		step=(l < r)?	(l*2)+1:r*2;

		printf("%d\n", step);
	}
}
