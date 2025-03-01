#include <stdio.h>

int main()
{
	int h, m, s, h2, m2, s2;

	for(int i=3; i; --i)
	{
		scanf("%d %d %d %d %d %d", &h, &m, &s, &h2, &m2, &s2);

		if(s2 < s)	s2+=60, --m2;
		s2-=s;
		if(m2 < m)	m2+=60, --h2;
		m2-=m;
		h2-=h;
		printf("%d %d %d\n", h2, m2, s2);
	}
}
