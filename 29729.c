#include <stdio.h>

int main()
{
	int s, n, m, u=0;
	char op;

	scanf("%d %d %d ", &s, &n, &m);

	for(int i=0; i < m+n; ++i)
	{
		op=getchar();
		if(op == '1')
		{
			if(u == s)	s<<=1;
			++u;
		}
		else	--u;
		getchar();
	}

	printf("%d", s);
}
