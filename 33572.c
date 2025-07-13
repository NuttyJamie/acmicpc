#include <stdio.h>

int main()
{
	long long m, a, total=0;
	int n;
	char OUT[]="OUT", DIMI[]="DIMI";

	scanf("%d %lld", &n, &m);

	for(int i=0; i < n; ++i)
	{
		scanf("%lld", &a);

		total+=a-1;
		if(m <= total)
		{
			puts(DIMI);
			m=0;
			break;
		}
	}
	if(m)	puts(OUT);
}
