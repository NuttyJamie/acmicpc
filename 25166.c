#include <stdio.h>

int main()
{
	int s, m;

	scanf("%d %d", &s, &m);

	if(s < 1024)	puts("No thanks");
	else
	{
		s-=1023;
		while(s)
		{
			if((s & 1) & (m ^ 1)) break;
			s>>=1;
			m>>=1;
		}
		puts((s)?	"Impossible":"Thanks");
	}
}
