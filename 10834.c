#include <stdio.h>

int main()
{
	int m, a, b, s;

	scanf("%d %d %d %d", &m, &a, &b, &s);
	while(--m)
	{
		int t;
		scanf("%d %d", &a, &t);
		b/=a, b*=t;
		scanf("%d", &t);
		s^=t;
	}
	printf("%d %d", s, b);
}
