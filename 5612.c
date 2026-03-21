#include <stdio.h>

int main()
{
	int n, m, i, o, s;

	scanf("%d %d", &n, &m);

	s=m;

	while(n--)
	{
		scanf("%d %d", &i, &o);

		m+=i;
		m-=o;

		if(m < 0)
		{
			s=0;
			break;
		}
		if(s < m)	s=m;
	}

	printf("%d", s);
}
