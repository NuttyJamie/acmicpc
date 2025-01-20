#include <stdio.h>

int main()
{
	int s, x;

	scanf("%d ", &x);
	for(int i=1; i <= x; ++i)
	{
		scanf("%d", &s);
		printf("Case %d:\n", i);
		for(char t=1; t <= s-t; ++t)
			if(s-t < 7) printf("(%d,%d)\n", t, s-t);
	}
}
