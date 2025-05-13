#include <stdio.h>

int main()
{
	int n, x, s, t, s2=-1;

	scanf("%d %d", &n, &x);

	while(n--)
	{
		scanf("%d %d", &s, &t);

		if(s+t <= x) s2=(s2 < s)?	s:s2;
	}
	printf("%d", s2);
}
